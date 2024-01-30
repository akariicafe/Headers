@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject {
    NSURL *_baseDirectoryURL;
}

+ (id)baseDirectoryURL;
+ (id)sharedManager;
+ (Class)managedTemporaryDirectoryClass;
+ (id)makeUniqueDirectoryWithBaseDirectory:(id)a0 filename:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)newDirectoryWithFilename:(id)a0;
- (void)_clearDirectories:(id)a0;
- (id)_readDirectories;

@end
