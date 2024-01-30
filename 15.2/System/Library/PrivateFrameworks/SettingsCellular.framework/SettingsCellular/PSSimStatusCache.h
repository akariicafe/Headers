@class Logger, NSMutableDictionary, NSString, CTXPCServiceSubscriptionInfo, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    Logger *_logger;
}

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (copy) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain) NSMutableDictionary *simStatusDict;
@property (nonatomic) BOOL isAnySimPresent;
@property (readonly, nonatomic) BOOL isDualSimCapable;
@property (readonly, nonatomic) BOOL isSIMMissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (id)subscriptionContexts;
- (void)subscriptionInfoDidChange;
- (void)willEnterForeground;
- (id)getLogger;
- (void)fetchSubscriptionContexts;
- (id)initPrivate;
- (id)subscriptionsInUse;
- (void).cxx_destruct;
- (id)activeDataSubscriptionContext;
- (id)simStatus:(id)a0;
- (id)init;
- (void)fetchSimStatus;
- (void)updateIsAnySimPresent;

@end
