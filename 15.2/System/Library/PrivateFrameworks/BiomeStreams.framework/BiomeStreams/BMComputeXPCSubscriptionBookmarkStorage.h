@interface BMComputeXPCSubscriptionBookmarkStorage : NSObject

+ (void)initializeBiomeDSLDirectoryForBootSession;

- (BOOL)checkExistenceOfBookmarkForSubscriptionWithIdentifier:(id)a0;
- (id)readBookmarkForSubscriptionWithIdentifier:(id)a0 success:(BOOL *)a1;
- (void)writeBookmark:(id)a0 forSubscriptionWithIdentifier:(id)a1;
- (void)removeBookmarkFileForSubscriptionWithIdentifier:(id)a0;

@end
