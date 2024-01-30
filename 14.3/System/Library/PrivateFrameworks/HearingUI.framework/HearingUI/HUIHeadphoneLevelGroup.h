@class NSArray, UIVisualEffectView, UILabel, NSMutableArray;

@interface HUIHeadphoneLevelGroup : UIView

@property (retain, nonatomic) NSMutableArray *levelContainers;
@property (retain, nonatomic) NSMutableArray *levels;
@property (retain, nonatomic) UIVisualEffectView *labelContainer;
@property (retain, nonatomic) UILabel *minLabel;
@property (retain, nonatomic) UILabel *thresholdLabel;
@property (retain, nonatomic) UILabel *maxLabel;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) unsigned long long pipFlagIndex;
@property (retain, nonatomic) NSArray *viewContraints;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)layoutLevels;
- (void)updateWithExposure:(double)a0 withThreshold:(unsigned long long)a1;

@end
