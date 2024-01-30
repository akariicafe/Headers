@class ATXHeroAppFeedback;

@interface ATXHeroAppManager : NSObject

@property (readonly, nonatomic) ATXHeroAppFeedback *heroFeedback;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFeedback:(id)a0;
- (void)donateHeroAppPredictions:(id)a0;

@end
