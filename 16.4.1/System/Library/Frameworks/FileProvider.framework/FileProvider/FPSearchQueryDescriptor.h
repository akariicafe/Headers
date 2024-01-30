@class NSString;

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor

@property (copy) NSString *searchQueryString;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)name;
- (id)_scopes;
- (void)augmentQueryContext:(id)a0;
- (BOOL)isEqualToItemQueryDescriptor:(id)a0;
- (BOOL)keepCollectorsAlive;
- (id)queryStringForMountPoint:(id)a0;

@end
