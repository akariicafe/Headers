@class NSString, NSArray, FCCPercentageOfDayRule;

@interface FCCCompletionOffTrackConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double goalBufferPercentage;
@property (readonly, copy, nonatomic) NSArray *coalescingRules;
@property (readonly, nonatomic) FCCPercentageOfDayRule *percentageOfDayRule;
@property (readonly, copy, nonatomic) NSArray *allowedGoalTypes;

- (id)protobuf;
- (id)initWithIdentifier:(id)a0 goalBufferPercentage:(double)a1 coalescingRules:(id)a2 percentageOfDayRule:(id)a3 allowedGoalTypes:(id)a4;
- (id)transportData;
- (id)initWithProtobuf:(id)a0;
- (id)initWithTransportData:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
