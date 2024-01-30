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

- (id)dumpState;
- (id)assertionHolders;
- (void)holdPowerAssertion:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)holdPowerAssertion:(id)a0 onBehalfOf:(int)a1;
- (void)releasePowerAssertion:(id)a0;

@end
