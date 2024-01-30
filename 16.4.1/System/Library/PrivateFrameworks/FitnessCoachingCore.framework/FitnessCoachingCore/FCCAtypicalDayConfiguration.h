@class NSString, NSArray, FCCPercentageOfDayRule;

@interface FCCAtypicalDayConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double minimumAheadPercentage;
@property (readonly, nonatomic) double minimumBehindPercentage;
@property (readonly, nonatomic) FCCPercentageOfDayRule *percentageOfDayRule;
@property (readonly, copy, nonatomic) NSArray *allowedGoalTypes;

- (id)protobuf;
- (id)initWithIdentifier:(id)a0 minimumAheadPercentage:(double)a1 minimumBehindPercentage:(double)a2 percentageOfDayRule:(id)a3 allowedGoalTypes:(id)a4;
- (id)transportData;
- (id)initWithProtobuf:(id)a0;
- (id)initWithTransportData:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
