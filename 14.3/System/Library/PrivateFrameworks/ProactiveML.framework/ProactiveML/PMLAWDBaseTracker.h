@class AWDProactiveModelFittingModelInfo;

@interface PMLAWDBaseTracker : NSObject

@property (readonly, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;

+ (id)trackerForPlanId:(id)a0;
+ (id)trackerForModelName:(id)a0 modelVersion:(id)a1 modelLocale:(id)a2;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)postMetricId:(unsigned int)a0 message:(id)a1;

@end
