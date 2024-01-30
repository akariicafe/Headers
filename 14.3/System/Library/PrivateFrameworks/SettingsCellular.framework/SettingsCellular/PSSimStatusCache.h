@class NSMutableDictionary, NSString, CTXPCServiceSubscriptionInfo, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (copy) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain) NSMutableDictionary *simStatusDict;
@property (readonly, nonatomic) BOOL isDualSimCapable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)subscriptionInfoDidChange;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (id)initPrivate;
- (id)init;
- (void).cxx_destruct;
- (void)fetchSubscriptionContexts;
- (void)fetchSimStatus;
- (void)willEnterForeground;
- (id)simStatus:(id)a0;
- (id)subscriptionContexts;
- (id)subscriptionsInUse;

@end
