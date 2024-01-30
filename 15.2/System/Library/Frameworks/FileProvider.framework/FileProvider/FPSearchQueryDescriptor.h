@class NSString;

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor

@property (copy) NSString *searchQueryString;

- (id)_scopes;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)hash;
- (id)queryStringForMountPoint:(id)a0;
- (BOOL)keepCollectorsAlive;
- (void)augmentQueryContext:(id)a0;
- (BOOL)isEqualToItemQueryDescriptor:(id)a0;

@end
