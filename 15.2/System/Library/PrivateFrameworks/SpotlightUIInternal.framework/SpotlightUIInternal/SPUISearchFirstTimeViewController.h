@class UIView;

@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController

@property BOOL hasBeenDisplayed;
@property (retain) UIView *contentView;

+ (void)dismissForever;
+ (void)updateViewCountToCount:(long long)a0;
+ (BOOL)needsDisplay;
+ (long long)viewCount;

- (void).cxx_destruct;
- (id)initWithDomains:(id)a0 explanationText:(id)a1 learnMoreText:(id)a2 continueButtonTitle:(id)a3;
- (void)updateViewCount;
- (double)idealContentHeight;

@end
