@class NSString, HMDAccessoryNetworkCredential;

@interface HMDUnpairedHAPAccessoryConfiguration : NSObject

@property (readonly) NSString *homeName;
@property (readonly) NSString *setupCode;
@property (readonly) id /* block */ setupCodeProvider;
@property (readonly) BOOL requiresUserConsent;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential;
@property (readonly) NSString *isoCountryCode;

- (void).cxx_destruct;
- (id)initWithHomeName:(id)a0 setupCode:(id)a1 setupCodeProvider:(id /* block */)a2 requiresUserConsent:(BOOL)a3 networkCredential:(id)a4 country:(id)a5;

@end
