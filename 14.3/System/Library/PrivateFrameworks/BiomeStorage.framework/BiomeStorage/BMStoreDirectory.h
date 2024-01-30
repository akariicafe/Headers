@interface BMStoreDirectory : NSObject

+ (void)_macOSConfigPath:(id)a0;
+ (id)_simRootDirectoryForPublicStream:(BOOL)a0;
+ (id)localStreamStoreDirectoryForPublicStream:(BOOL)a0;
+ (id)_localStreamStoreDirectoryForPublicStream:(BOOL)a0;
+ (id)_localStreamStoreDirectoryForPublicStream;
+ (id)_unitTestsRootDirectoryForPublicStream:(BOOL)a0;
+ (id)_localStreamStoreDirectoryForPrivateStream;

@end
