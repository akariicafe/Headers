@interface MPModelLibrarySearchResponse : MPModelLibraryResponse

- (id)initWithRequest:(id)a0;
- (void)_mediaLibraryDidChangeNotification:(id)a0;
- (void)dealloc;
- (BOOL)hasMoreResultsForSectionAtIndex:(long long)a0;
- (long long)searchWeightForIndexPath:(id)a0;

@end
