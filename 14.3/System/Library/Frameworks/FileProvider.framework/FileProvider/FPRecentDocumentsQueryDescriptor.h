@interface FPRecentDocumentsQueryDescriptor : FPSpotlightQueryDescriptor

- (id)name;
- (id)queryStringForMountPoint:(id)a0;
- (unsigned long long)desiredCount;
- (void)augmentQueryContext:(id)a0;

@end
