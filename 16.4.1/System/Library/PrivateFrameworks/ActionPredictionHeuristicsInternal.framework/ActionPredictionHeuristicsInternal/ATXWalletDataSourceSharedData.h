@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (BOOL)hasEmptyWalletPasses;
- (id)init;
- (void)_passesDidChange;
- (void).cxx_destruct;
- (void)setHasEmptyWalletPasses:(BOOL)a0;

@end
