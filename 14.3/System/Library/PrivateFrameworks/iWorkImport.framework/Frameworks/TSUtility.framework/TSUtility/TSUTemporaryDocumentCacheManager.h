@interface TSUTemporaryDocumentCacheManager : TSUTemporaryDirectoryManager

+ (id)sharedManager;
+ (id)baseDirectoryURL;

- (id)newDirectoryWithFilename:(id)a0;
- (id)newDirectoryForDocumentUUID:(id)a0;

@end
