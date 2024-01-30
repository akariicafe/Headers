@class NSDistributedNotificationCenter;
@protocol NPKCompanionSecureRangingCoordinatorDelegate;

@interface NPKCompanionSecureRangingCoordinator : NSObject {
    NSDistributedNotificationCenter *_distributedNotificationCenter;
}

@property (weak, nonatomic) id<NPKCompanionSecureRangingCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (void)_registerObservers;
- (id)initWithDistributedNotificationCenter:(id)a0;
- (void)_handleCarKeyRangingStartedNotification:(id)a0;
- (void)_handleCarKeyRangingEndedNotification:(id)a0;
- (void)_parseRangingStartedNotificationObject:(id)a0 outApplicationIdentifier:(id *)a1 outApplicationKeyIdentifier:(id *)a2 outPairedReaderIdentifier:(id *)a3 outRangingTimeoutInSeconds:(id *)a4;
- (void)_parseRangingEndedNotificationObject:(id)a0 outApplicationIdentifier:(id *)a1 outApplicationKeyIdentifier:(id *)a2 outPairedReaderIdentifier:(id *)a3;

@end
