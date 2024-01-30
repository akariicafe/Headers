@class NSString;

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor

@property (copy) NSString *searchQueryString;

- (BOOL)isEqualToItemQueryDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)_scopes;
- (unsigned long long)hash;
- (id)name;
- (id)queryStringForMountPoint:(id)a0;
- (BOOL)keepCollectorsAlive;
- (void)augmentQueryContext:(id)a0;

@end
