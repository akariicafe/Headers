@class UIView;

@interface CPUIPlaybackProgressView : UIView

@property (retain, nonatomic) UIView *overallProgressView;
@property (retain, nonatomic) UIView *currentProgressView;
@property (nonatomic) BOOL shouldResizeCurrentProgress;
@property (nonatomic) double playbackProgress;
@property (nonatomic) BOOL highlighted;

- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)setProgressViewHighlighted:(BOOL)a0;

@end
