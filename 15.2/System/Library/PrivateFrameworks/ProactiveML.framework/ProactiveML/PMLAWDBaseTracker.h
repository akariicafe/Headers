@class AWDProactiveModelFittingModelInfo;

@interface PMLAWDBaseTracker : NSObject

@property (readonly, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;

+ (id)trackerForPlanId:(id)a0;
+ (id)trackerForModelName:(id)a0 modelVersion:(id)a1 modelLocale:(id)a2;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)postMetricId:(unsigned int)a0 message:(id)a1;

@end
