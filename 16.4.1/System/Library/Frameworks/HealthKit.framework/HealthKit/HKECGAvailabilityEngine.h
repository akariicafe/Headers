@interface HKECGAvailabilityEngine : NSObject

+ (id)shouldAdvertiseECG2WithSupportedRegion:(BOOL)a0 meetsAgeRequirement:(BOOL)a1 backgroundDeliveredNotAdvertised:(BOOL)a2 prevOnboarded:(BOOL)a3 watchCapable:(BOOL)a4 phoneCapable:(BOOL)a5 isTinker:(BOOL)a6;

@end
