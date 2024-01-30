@class NSString, CTXPCServiceSubscriptionContext;

@interface IDSCTSIM : NSObject <IDSCTSIM> {
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
}

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context;
@property (readonly, nonatomic) NSString *SIMIdentifier;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL isDefaultVoiceSIM;
@property (readonly, nonatomic) unsigned long long slot;
@property (readonly, nonatomic) NSString *mobileCountryCode;
@property (readonly, nonatomic) NSString *mobileNetworkCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
