@class NSString, NSNumber;

@interface HFPowerStateTargetValueTuple : NSObject

@property (readonly, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) NSNumber *onTargetValue;
@property (readonly, nonatomic) NSNumber *offTargetValue;

+ (id)fanStateTargetValueTuple;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCharacteristicType:(id)a0 onTargetValue:(id)a1 offTargetValue:(id)a2;
- (id)targetValueForPrimaryState:(long long)a0;
- (long long)primaryStateForTargetValue:(id)a0;

@end
