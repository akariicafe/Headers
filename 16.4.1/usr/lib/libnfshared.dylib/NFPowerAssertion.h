@class NSMutableDictionary, NSObject;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface NFPowerAssertion : NSObject {
    unsigned int _powerNotificationConnection;
    struct IONotificationPort { } *_powerNotificationPort;
    unsigned int _powerNotificationNotifier;
    NSObject<OS_os_transaction> *_powerAssertTransaction;
    NSMutableDictionary *_assertionHolders;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL enableDebug;

+ (id)sharedPowerAssertion;

- (id)assertionHolders;
- (void)holdPowerAssertion:(id)a0 onBehalfOf:(int)a1;
- (id)dumpState;
- (void)releasePowerAssertion:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)holdPowerAssertion:(id)a0;

@end
