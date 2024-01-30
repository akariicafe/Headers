@class NSString, NSNumber, WALocationCondition;

@interface WALocationConditionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) WALocationCondition *condition;
@property (readonly, nonatomic) NSNumber *temperature;
@property (readonly, nonatomic) NSNumber *temperatureHigh;
@property (readonly, nonatomic) NSNumber *temperatureLow;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithCondition:(id)a0 temperature:(id)a1 temperatureHigh:(id)a2 temperatureLow:(id)a3;

@end
