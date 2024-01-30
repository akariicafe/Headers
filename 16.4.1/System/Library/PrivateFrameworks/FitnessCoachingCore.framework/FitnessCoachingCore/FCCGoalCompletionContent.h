@class NSString, NSArray;

@interface FCCGoalCompletionContent : NSObject <FCCDataSerializable>

@property (readonly, nonatomic) long long activitySummaryIndex;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *completedGoalTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transportData;
- (id)initWithTransportData:(id)a0;
- (void).cxx_destruct;
- (id)initWithActivitySummaryIndex:(long long)a0 identifier:(id)a1 completedGoalTypes:(id)a2;

@end
