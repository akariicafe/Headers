@class NSString, NSArray, FCCTimeOfDayRule;

@interface FCCAlmostThereConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double minimumPercentageComplete;
@property (readonly, nonatomic) double goalBufferPercentage;
@property (readonly, copy, nonatomic) NSArray *coalescingRules;
@property (readonly, nonatomic) FCCTimeOfDayRule *timeOfDayRule;
@property (readonly, nonatomic) long long goalType;

- (id)initWithIdentifier:(id)a0 minimumPercentageComplete:(double)a1 goalBufferPercentage:(double)a2 coalescingRules:(id)a3 timeOfDayRule:(id)a4 goalType:(long long)a5;
- (id)protobuf;
- (id)transportData;
- (id)initWithProtobuf:(id)a0;
- (id)initWithTransportData:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
