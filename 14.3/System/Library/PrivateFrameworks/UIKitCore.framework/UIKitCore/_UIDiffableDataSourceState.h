@class NSUUID, NSOrderedSet, NSString;
@protocol _UIDataSourceSnapshotTranslating;

@interface _UIDiffableDataSourceState : NSObject <_UIDiffableDataSourceState, NSCopying> {
    NSUUID *_generationID;
    NSOrderedSet *_identifiers;
    NSOrderedSet *_sections;
    id<_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;
}

@property (readonly, nonatomic) NSUUID *generationID;
@property (readonly, nonatomic) NSOrderedSet *identifiers;
@property (readonly, nonatomic) NSOrderedSet *sections;
@property (readonly, nonatomic) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)indexOfSectionIdentifier:(id)a0;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(id)a0;
- (id)initWithState:(id)a0;
- (id)sectionIdentifiers;
- (id)itemIdentifiers;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (long long)numberOfItems;
- (id)init;
- (id)indexPathForItemIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (long long)indexOfItemIdentifier:(id)a0;
- (id)sectionIndexesForItemIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithGenerationID:(id)a0 identifiers:(id)a1 sections:(id)a2 dataSourceSnapshot:(id)a3;

@end
