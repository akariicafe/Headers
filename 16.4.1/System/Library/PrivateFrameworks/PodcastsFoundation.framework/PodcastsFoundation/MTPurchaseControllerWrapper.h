@interface MTPurchaseControllerWrapper : NSObject {
    void /* unknown type, empty encoding */ purchaseController;
}

@property (class, nonatomic, readonly) MTPurchaseControllerWrapper *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)fetchChannelUpdatesCheckingEntitlementsNotification;
- (void)forceFetchLatestChannelUpdates;

@end
