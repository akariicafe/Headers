@interface MPModelLibrarySearchResponse : MPModelLibraryResponse

- (id)initWithRequest:(id)a0;
- (void)dealloc;
- (void)_mediaLibraryDidChangeNotification:(id)a0;
- (BOOL)hasMoreResultsForSectionAtIndex:(long long)a0;
- (long long)searchWeightForIndexPath:(id)a0;

@end
