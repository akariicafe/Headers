@class TZFileSystemInterface, NSXPCConnection;

@interface TZUpdate : NSObject

@property (retain) TZFileSystemInterface *fileSystemInterface;
@property (retain) NSXPCConnection *connectionToService;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)isUpdateWaitingWithCompletion:(id /* block */)a0;
- (id)createNewXPCConnection;
- (BOOL)isUpdateWaiting;
- (void)purgeAllAssetsWithCompletion:(id /* block */)a0;
- (id)affectedZones;
- (id)currentTZDataVersion;
- (BOOL)alertForAllZones;
- (id)updateTZDataVersion;

@end
