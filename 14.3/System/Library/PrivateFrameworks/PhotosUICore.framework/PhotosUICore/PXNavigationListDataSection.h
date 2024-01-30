@class NSArray, NSDictionary, PXCollectionsDataSection, NSIndexSet, NSNumber;

@interface PXNavigationListDataSection : PXDataSection {
    NSIndexSet *_dataSubsectionIndexes;
    NSArray *_dataSubsections;
    NSNumber *_countNumber;
    BOOL _skipAssetCountFetches;
}

@property (readonly, nonatomic) PXCollectionsDataSection *collectionsDataSection;
@property (readonly, nonatomic) NSArray *sectionRangeMap;
@property (readonly, nonatomic) long long indentationLevel;
@property (readonly, copy, nonatomic) NSDictionary *childDataSections;
@property (readonly, copy, nonatomic) NSDictionary *childIndexHints;

- (long long)indexInCollectionsDataSectionOfListItem:(id)a0 hintIndex:(long long)a1;
- (void).cxx_destruct;
- (void)_createDataSubsectionsIfNecessary;
- (long long)validatedIndexOfListItem:(id)a0 hintIndex:(long long)a1;
- (long long)indexForListItem:(id)a0;
- (id)parentOfListItemAtIndex:(long long)a0 localIndex:(long long *)a1;
- (unsigned long long)_dataSubsectionIndexForListItemAtIndex:(long long)a0;
- (long long)count;
- (id)existingFetchResultForListItem:(id)a0;
- (id)initWithCollectionsDataSection:(id)a0;
- (id)debugDescription;
- (id)content;
- (id)initWithCollectionsDataSection:(id)a0 indentationLevel:(long long)a1 outlineObject:(id)a2 childDataSections:(id)a3 childIndexHints:(id)a4 skipAssetCountFetches:(BOOL)a5;
- (id)initWithOutlineObject:(id)a0;
- (id)objectAtIndex:(long long)a0;

@end
