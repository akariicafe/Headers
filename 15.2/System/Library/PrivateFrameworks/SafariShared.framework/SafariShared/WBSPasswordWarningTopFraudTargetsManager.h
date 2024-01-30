@class WBSRemotePlistController;

@interface WBSPasswordWarningTopFraudTargetsManager : NSObject {
    WBSRemotePlistController *_plistController;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)getTopFraudTargetsWithCompletionHandler:(id /* block */)a0;
- (id)_initWithBuiltinListURL:(id)a0 shouldAttemptToUpdateConfiguration:(BOOL)a1;

@end
