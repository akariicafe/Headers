@class UIView;

@interface CPUIPlaybackProgressView : UIView

@property (retain, nonatomic) UIView *overallProgressView;
@property (retain, nonatomic) UIView *currentProgressView;
@property (nonatomic) BOOL shouldResizeCurrentProgress;
@property (nonatomic) double playbackProgress;
@property (nonatomic) BOOL highlighted;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)setProgressViewHighlighted:(BOOL)a0;

@end
