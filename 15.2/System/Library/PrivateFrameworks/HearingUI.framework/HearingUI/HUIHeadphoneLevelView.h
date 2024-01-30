@class NSString, NSArray, UIVisualEffectView, HUIHeadphoneLevelGroup, UILabel, UIView, NSNumberFormatter;
@protocol HACCContentModuleDelegate;

@interface HUIHeadphoneLevelView : UIControl <HACCContentModule>

@property (retain, nonatomic) UIView *centerContainer;
@property (retain, nonatomic) UIVisualEffectView *titleContainer;
@property (retain, nonatomic) UIView *subtitleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLeftLabel;
@property (retain, nonatomic) UILabel *subtitleRightLabel;
@property (retain, nonatomic) UIVisualEffectView *labelContainer;
@property (retain, nonatomic) UILabel *minLabel;
@property (retain, nonatomic) UILabel *thresholdLabel;
@property (retain, nonatomic) UILabel *maxLabel;
@property (retain, nonatomic) HUIHeadphoneLevelGroup *levelGroup;
@property (retain, nonatomic) NSNumberFormatter *dbFormatter;
@property (retain, nonatomic) NSArray *viewConstraints;
@property (nonatomic) int layoutViewSize;
@property (readonly, nonatomic) BOOL isRTL;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (BOOL)enabled;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)isAccessibilityElement;
- (id)init;
- (id)accessibilityValue;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)updateValue;
- (id)contentValue;
- (void)updateViewsWithSlowLeq:(double)a0 fastLeq:(double)a1 andThreshold:(unsigned long long)a2;
- (id)formatLevelRating:(id)a0 threshold:(unsigned long long)a1;
- (id)formatLevel:(id)a0 baseFont:(id)a1;

@end
