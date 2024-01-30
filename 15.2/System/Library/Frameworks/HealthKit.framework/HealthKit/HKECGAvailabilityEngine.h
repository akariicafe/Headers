@interface HKECGAvailabilityEngine : NSObject

+ (id)shouldAdvertiseECG2WithSupportedRegion:(BOOL)a0 meetsAgeRequirement:(BOOL)a1 prevOnboarded:(BOOL)a2 watchCapable:(BOOL)a3 phoneCapable:(BOOL)a4 isTinker:(BOOL)a5;

@end
