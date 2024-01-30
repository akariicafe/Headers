@class NSString, CTXPCServiceSubscriptionContext, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface CTDataDelegate : NSObject <CoreTelephonyClientDataDelegate> {
    NSObject<OS_dispatch_queue> *_initiationQueue;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CoreTelephonyClient *_client;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)preferredDataSimChanged:(id)a0;
- (id)init;
- (void)_initCTClient;
- (id)getCTClient;
- (id)getPreferredDataSubscriptionContext;

@end
