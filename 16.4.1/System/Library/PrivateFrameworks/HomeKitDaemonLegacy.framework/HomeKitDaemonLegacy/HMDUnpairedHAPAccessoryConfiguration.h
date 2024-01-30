@class NSString, HMDAccessoryNetworkCredential, NSNumber;

@interface HMDUnpairedHAPAccessoryConfiguration : NSObject

@property (copy) NSString *setupCode;
@property (copy) id /* block */ setupCodeProvider;
@property BOOL requiresUserConsent;
@property (retain) HMDAccessoryNetworkCredential *networkCredential;
@property (copy) NSString *isoCountryCode;
@property (copy) NSNumber *chipFabricIndex;

- (void).cxx_destruct;

@end
