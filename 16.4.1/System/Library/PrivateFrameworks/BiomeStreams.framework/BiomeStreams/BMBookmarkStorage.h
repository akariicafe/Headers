@class BMFileManager;

@interface BMBookmarkStorage : NSObject {
    BMFileManager *_fileManager;
}

+ (id)currentSession;
+ (id)currentSessionPath;
+ (void)initializeBiomeDSLDirectoryForBootSession;
+ (id)newFileManager;
+ (id)persistentPath;
+ (id)sessionsPath;
+ (id)basePath;

- (void)writeBookmark:(id)a0 forSubscriptionWithIdentifier:(id)a1 client:(id)a2;
- (BOOL)checkExistenceOfBookmarkForSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (id)pathForSessionStorageWithIdentifier:(id)a0 client:(id)a1;
- (id)init;
- (void)removeBookmarkFileForSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (id)readBookmarkForSubscriptionWithIdentifier:(id)a0 client:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
