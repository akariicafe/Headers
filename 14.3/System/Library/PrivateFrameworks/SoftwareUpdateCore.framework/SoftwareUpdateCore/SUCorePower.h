@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SUCorePower : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;
@property (retain, nonatomic) NSMutableDictionary *activePowerAssertions;

+ (id)sharedPowerManager;
+ (void)_enablePowerAssertion:(id)a0 forAppendedDomain:(id)a1;
+ (void)_disablePowerAssertion:(id)a0 forAppendedDomain:(id)a1;
+ (void)setPowerAssertion:(BOOL)a0 forIdentifierDomain:(id)a1;
+ (int)getPowerAssertionCountForIdentifierDomain:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
