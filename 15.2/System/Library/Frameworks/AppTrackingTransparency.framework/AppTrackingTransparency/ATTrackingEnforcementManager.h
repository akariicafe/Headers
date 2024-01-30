@class NSDate;

@interface ATTrackingEnforcementManager : NSObject

@property (class, retain, nonatomic) NSDate *lastBagLookup;
@property (class, nonatomic) BOOL lastEnforcement;
@property (class, nonatomic) long long lastReasonCode;
@property (class, nonatomic) BOOL isDefaultReturned;

+ (BOOL)shouldEnforceTrackingWithReasonCode:(long long *)a0;

@end
