@class NSString, CTXPCServiceSubscriptionContext, NSObject, CoreTelephonyClient;
@protocol AMSUIWebJSTelephonyDelegate, OS_dispatch_queue;

@interface AMSUIWebJSTelephony : NSObject <AMSUIWebJSTelephonyProtocol>

@property (weak, nonatomic) id<AMSUIWebJSTelephonyDelegate> delegate;
@property (retain, nonatomic) CoreTelephonyClient *telephonyClient;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *telephonyContext;
@property (nonatomic) BOOL telephonySetupFailed;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyQueue;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *networkCode;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) NSString *radioTechnology;
@property (readonly, nonatomic) NSString *radioType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_hasRequiredTelephonyEntitlement;
+ (BOOL)_hasCellularTelephonyCapability;

- (void)phoneNumberAvailable:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)phoneNumberChanged:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (id)formattedPhoneNumber:(id)a0;

@end
