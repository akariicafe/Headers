@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_passesDidChange;
- (BOOL)hasEmptyWalletPasses;
- (void)setHasEmptyWalletPasses:(BOOL)a0;

@end
