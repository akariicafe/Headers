@class WBSRemotePlistController;

@interface _SFRequestDesktopSiteQuirksManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
}

@property (class, readonly, nonatomic) _SFRequestDesktopSiteQuirksManager *sharedManager;

- (id)init;
- (void)getAllQuirkValuesWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)quirksValueForDomain:(id)a0 completionHandler:(id /* block */)a1;

@end
