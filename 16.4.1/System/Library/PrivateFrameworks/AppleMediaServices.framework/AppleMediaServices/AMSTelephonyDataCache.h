@class NSArray, NSString, CTXPCContexts, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface AMSTelephonyDataCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CTXPCContexts *activeContexts;
@property (readonly, nonatomic) NSArray *carrierNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (void)phoneNumberChanged:(id)a0;
- (void)activeSubscriptionsDidChange;
- (id)carrierNamesPromise;
- (void).cxx_destruct;
- (void)_clearCaches:(id)a0;
- (id)carrierNamesWithError:(id *)a0;
- (id)initWithClientClass:(Class)a0;
- (id)initWithTelephonyClient:(id)a0 queue:(id)a1;

@end
