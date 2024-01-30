@class NSString, HFCondition;

@interface HFConditionUISummary : NSObject

@property (readonly, nonatomic) NSString *conditionTitle;
@property (readonly, nonatomic) NSString *conditionDescription;
@property (readonly, nonatomic) HFCondition *condition;

- (void).cxx_destruct;
- (id)initWithCondition:(id)a0 title:(id)a1 description:(id)a2;

@end
