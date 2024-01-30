@class NSUUID, NSOrderedSet, NSString;
@protocol _UIDataSourceSnapshotTranslating;

@interface _UIDiffableDataSourceState : NSObject <_UIDiffableDataSourceState, NSCopying> {
    NSUUID *_generationID;
    NSOrderedSet *_identifiers;
    NSOrderedSet *_sections;
    id<_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;
    struct { unsigned char identifiersHaveGuaranteedPerformance : 1; unsigned char sectionsHaveGuaranteedPerformance : 1; } _stateFlags;
}

@property (readonly, nonatomic) NSUUID *generationID;
@property (readonly, nonatomic) NSOrderedSet *identifiers;
@property (readonly, nonatomic) NSOrderedSet *sections;
@property (readonly, nonatomic) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionIdentifierForIndex:(long long)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (long long)indexOfItemIdentifier:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (id)sectionIdentifiers;
- (long long)indexOfSectionIdentifier:(id)a0;
- (id)initWithState:(id)a0;
- (void)validateIdentifiers;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (id)itemIdentifiers;
- (id)initWithStateAdvancingGenerationID:(id)a0;
- (long long)numberOfItemsInSection:(id)a0;
- (id)initWithGenerationID:(id)a0 identifiers:(id)a1 sections:(id)a2 dataSourceSnapshot:(id)a3 identifiersHaveGuaranteedPerformance:(BOOL)a4 sectionsHaveGuaranteedPerformance:(BOOL)a5;
- (void)ensureOrderedSetsHaveGuaranteedPerformance;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithGenerationID:(id)a0 identifiers:(id)a1 sections:(id)a2 dataSourceSnapshot:(id)a3;
- (id)init;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)indexForSectionIdentifier:(id)a0;
- (BOOL)containsItemIdentifier:(id)a0;
- (BOOL)containsSectionIdentifier:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;
- (id)sectionIndexesForItemIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
