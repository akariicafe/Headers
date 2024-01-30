@interface TSATemporaryDocumentSupportManager : TSUTemporaryDirectoryManager

+ (id)sharedManager;
+ (id)baseDirectoryURL;
+ (Class)managedTemporaryDirectoryClass;

- (id)newDirectoryForDocumentUUID:(id)a0;

@end
