@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking> {
    NSLock *_lock;
}

@property BOOL sessionPrompt;

+ (id)coordinator;

- (void)unlock;
- (void)lock;
- (void).cxx_destruct;
- (id)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)markPrompt;
- (BOOL)didPrompt;

@end
