@class NSString, NSArray;

@interface FCCGoalProgressContent : NSObject <FCCDataSerializable>

@property (readonly, copy, nonatomic) NSString *eventIdentifier;
@property (readonly, copy, nonatomic) NSArray *goalTypesToDisplay;
@property (readonly, nonatomic) long long goalTypeToHighlight;
@property (readonly, nonatomic) double expectedGoalValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transportData;
- (id)initWithTransportData:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventIdentifier:(id)a0 goalTypesToDisplay:(id)a1 goalTypeToHighlight:(long long)a2 expectedGoalValue:(double)a3;

@end
