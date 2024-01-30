@class QLSpotlightSearchableItemInfo, NSString;

@interface QLSpotlightFetcher : QLItemFetcher {
    NSString *_searchableItemUniqueIdentifier;
    NSString *_queryString;
    NSString *_applicationBundleIdentifier;
}

@property (readonly) QLSpotlightSearchableItemInfo *info;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)itemSize;
- (void).cxx_destruct;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)initWithSearchableItemUniqueIdentifier:(id)a0 queryString:(id)a1 applicationBundleIdentifier:(id)a2;
- (BOOL)isLongFetchOperation;

@end
