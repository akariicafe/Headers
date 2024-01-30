@class NMAPIRequest, NSString, NSArray, NSDictionary, NSMutableDictionary, NSMutableArray, NSCache;

@interface NMAPIDefaultSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    NMAPIRequest *_request;
    NSArray *_results;
    NSDictionary *_storeBagDictionary;
    NSMutableArray *_sectionResultIDs;
    NSMutableDictionary *_sectionResults;
    NSMutableArray *_sectionedItemResultIDs;
    NSMutableDictionary *_itemResults;
    NSCache *_cachedSections;
    NSCache *_cachedItems;
    NSMutableDictionary *_importedIdentifierSets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_parseResults;
- (id)_storeBrowseSectionWithDictionary:(id)a0;
- (BOOL)_isSupportedItem:(id)a0;
- (void)_addSectionWithIdentifier:(id)a0 dictionary:(id)a1;
- (void)_addItemsFromArray:(id)a0;
- (void)_updateImportedIdentifierSetsWithIdentifier:(id)a0 dictionary:(id)a1;
- (id)_musicURLWithPartialURLString:(id)a0;
- (id)initWithRequest:(id)a0 results:(id)a1 storeBagDictionary:(id)a2;

@end
