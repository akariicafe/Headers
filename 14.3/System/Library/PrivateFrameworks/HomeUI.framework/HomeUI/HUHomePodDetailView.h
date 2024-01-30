@class UILabel, HUMonogramView, UIView;
@protocol HFStringGenerator, HUHomePodDetailViewDelegate;

@interface HUHomePodDetailView : UIButton

@property (nonatomic) BOOL isAnimatingPop;
@property (readonly, nonatomic) HUMonogramView *unitBadgeLabel;
@property (copy, nonatomic) id<HFStringGenerator> unitName;
@property (readonly, nonatomic) unsigned long long mediaSystemRole;
@property (readonly, nonatomic) UILabel *unitNameLabel;
@property (readonly, nonatomic) UIView *unitImageView;
@property (weak, nonatomic) id<HUHomePodDetailViewDelegate> delegate;

- (void).cxx_destruct;
- (void)setUnitName:(id)a0;
- (id)unitName;
- (void)_setupConstraints;
- (void)_updateImagesForRole;
- (void)_speakerTapped;
- (id)initWithRole:(unsigned long long)a0 variant:(unsigned long long)a1;

@end
