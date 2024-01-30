@class UIImageView, UILabel, UIView;
@protocol HFStringGenerator, HUHomePodDetailViewDelegate;

@interface HUHomePodDetailView : UIButton

@property (nonatomic) BOOL isAnimatingPop;
@property (readonly, nonatomic) UIImageView *unitBadgeLabel;
@property (copy, nonatomic) id<HFStringGenerator> unitName;
@property (readonly, nonatomic) unsigned long long mediaSystemRole;
@property (readonly, nonatomic) UILabel *unitNameLabel;
@property (readonly, nonatomic) UIView *unitImageView;
@property (weak, nonatomic) id<HUHomePodDetailViewDelegate> delegate;

- (void)_setupConstraints;
- (id)unitName;
- (void)setUnitName:(id)a0;
- (void).cxx_destruct;
- (void)_speakerTapped;
- (void)_updateImagesForRole;
- (id)initWithRole:(unsigned long long)a0 variant:(unsigned long long)a1;

@end
