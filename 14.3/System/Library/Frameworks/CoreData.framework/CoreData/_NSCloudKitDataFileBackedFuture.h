@interface _NSCloudKitDataFileBackedFuture : _NSDataFileBackedFuture

- (void)_copyToInterimLocation;
- (void)_moveToPermanentLocation;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (BOOL)_isCloudKitSupportOriginated;

@end
