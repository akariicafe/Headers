@class UIView;

@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController

@property BOOL hasBeenDisplayed;
@property (retain) UIView *contentView;

+ (void)updateViewCountToCount:(long long)a0;
+ (long long)viewCount;
+ (void)dismissForever;
+ (BOOL)needsDisplay;

- (void).cxx_destruct;
- (id)initWithSupportedDomains:(unsigned long long)a0 explanationText:(id)a1 learnMoreText:(id)a2 continueButtonTitle:(id)a3;
- (void)updateViewCount;
- (double)idealContentHeight;

@end
