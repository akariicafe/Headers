@interface STUsagePseudoApp : STStorageApp

- (long long)dataSize;
- (long long)totalSize;
- (long long)purgeableSize;
- (long long)dynamicSize;
- (long long)staticSize;
- (id)initWithUsageBundleApp:(id)a0;

@end
