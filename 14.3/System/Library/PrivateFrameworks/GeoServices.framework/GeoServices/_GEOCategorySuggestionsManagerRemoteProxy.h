@class NSString;

@interface _GEOCategorySuggestionsManagerRemoteProxy : NSObject <GEOCategorySuggestionsManagerServerProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCachedSpotlightCategorySuggestions:(id /* block */)a0;

@end
