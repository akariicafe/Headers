@class NSNumber, NSUUID, NSDateInterval;

@interface HDHRAFibBurdenNotificationMode : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL shouldForwardToWatch;
@property (readonly, nonatomic) NSNumber *currentPercentage;
@property (readonly, nonatomic) NSNumber *currentValueClamped;
@property (readonly, nonatomic) NSDateInterval *currentValueDateInterval;
@property (readonly, nonatomic) NSUUID *currentValueUUID;
@property (readonly, nonatomic) NSNumber *previousPercentage;
@property (readonly, nonatomic) NSNumber *previousValueClamped;
@property (readonly, nonatomic) NSNumber *previousTimeZoneDiffersFromCurrent;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 shouldForwardToWatch:(BOOL)a1 currentPercentage:(id)a2 currentValueClamped:(id)a3 currentValueDateInterval:(id)a4 currentValueUUID:(id)a5 previousPercentage:(id)a6 previousValueClamped:(id)a7 previousTimeZoneDiffersFromCurrent:(id)a8;

@end
