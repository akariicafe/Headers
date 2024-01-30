@class WBSRemotePlistController;

@interface _SFRequestDesktopSiteQuirksManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
    BOOL _supportsDesktopClassBrowsing;
}

@property (class, readonly, nonatomic) _SFRequestDesktopSiteQuirksManager *sharedManager;

- (void)quirksValueForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getAllQuirkValuesWithCompletionHandler:(id /* block */)a0;
- (id)init;

@end
