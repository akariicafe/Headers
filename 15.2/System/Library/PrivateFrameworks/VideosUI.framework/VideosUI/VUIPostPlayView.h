@class VUICountDownProgressIndicator, _TVImageView, VUILabel, AVBackgroundView, TVImageProxy, NSNumber, NSString;
@protocol VUIPostPlayViewDelegate;

@interface VUIPostPlayView : UIView

@property (retain, nonatomic) AVBackgroundView *backgroundView;
@property (retain, nonatomic) _TVImageView *episodeImageView;
@property (retain, nonatomic) VUILabel *nextEpisodeLabel;
@property (retain, nonatomic) VUILabel *headerLabel;
@property (retain, nonatomic) TVImageProxy *episodeImageProxy;
@property (retain, nonatomic) VUICountDownProgressIndicator *autoPlayIndicator;
@property (retain, nonatomic) NSNumber *autoPlayDuration;
@property (retain, nonatomic) NSNumber *defaultAutoPlayDuration;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *header;
@property (weak, nonatomic) id<VUIPostPlayViewDelegate> delegate;
@property (nonatomic) BOOL canAutoPlay;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_setupViews;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_layoutForCategoryAccessibility:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTVImageProxy:(id)a1 andTitle:(id)a2 andHeader:(id)a3;
- (struct CGSize { double x0; double x1; })_layoutForOriginal:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (void)_startAutoPlayAnimation;
- (void)_invalidateAutoPlayIfNeeded;
- (void)_dispatchAutoPlayEvent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andEpisodeArtworkURLStringFormat:(id)a1 andTitle:(id)a2 andHeader:(id)a3;
- (void)startAutoPlayTimer;
- (void)stopAutoPlayTimer;

@end
