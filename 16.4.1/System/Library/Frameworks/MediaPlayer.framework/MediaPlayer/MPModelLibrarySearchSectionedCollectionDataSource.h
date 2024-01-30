@class MPLibraryObjectDatabase, NSArray, NSString, MPModelLibrarySearchRequest;

@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    MPLibraryObjectDatabase *_lod;
}

@property (readonly, copy, nonatomic) NSArray *resultContainers;
@property (copy, nonatomic) MPModelLibrarySearchRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemAtIndexPath:(id)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasMoreResultsForSectionAtIndex:(long long)a0;
- (id)initWithEntitiesQueryResultContainers:(id)a0 libraryObjectDatabase:(id)a1;
- (long long)searchWeightForIndexPath:(id)a0;

@end
