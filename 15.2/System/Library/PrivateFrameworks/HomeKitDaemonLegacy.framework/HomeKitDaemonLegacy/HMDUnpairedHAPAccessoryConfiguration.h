@class NSString, HMDAccessoryNetworkCredential;

@interface HMDUnpairedHAPAccessoryConfiguration : NSObject

@property (readonly) NSString *setupCode;
@property (readonly) id /* block */ setupCodeProvider;
@property (readonly) BOOL requiresUserConsent;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential;
@property (readonly) NSString *isoCountryCode;

- (void).cxx_destruct;
- (id)initWithSetupCode:(id)a0 setupCodeProvider:(id /* block */)a1 requiresUserConsent:(BOOL)a2 networkCredential:(id)a3 country:(id)a4;

@end
