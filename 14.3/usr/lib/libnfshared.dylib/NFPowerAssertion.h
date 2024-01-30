@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface NFPowerAssertion : NSObject {
    unsigned int _powerNotificationConnection;
    struct IONotificationPort { } *_powerNotificationPort;
    unsigned int _powerNotificationNotifier;
    unsigned int _assertionID;
    NSMutableDictionary *_assertionHolders;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_transaction> *_powerAssertTransaction;
}

@property (nonatomic) BOOL enableDebug;

+ (id)sharedPowerAssertion;

- (id)assertionHolders;
- (id)init;
- (void).cxx_destruct;
- (void)releasePowerAssertion:(id)a0;
- (id)dumpState;
- (void)holdPowerAssertion:(id)a0;

@end
