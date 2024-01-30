@class NSMutableDictionary;

@interface HFThreadCommissioner : NSObject

@property (readonly, nonatomic) NSMutableDictionary *activeCommissioningForSetupCode;

+ (id)sharedCommissioner;

- (id)init;
- (void).cxx_destruct;
- (id)commissionAccessoryWithSetupCode:(id)a0 threadIdentifier:(id)a1 home:(id)a2;
- (void)cancelCommissioningForSetupCode:(id)a0;
- (void)cancelAllCommissioning;

@end
