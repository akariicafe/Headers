@class MSPieImageView, UIImageView, NSObject, SUPlayerStatus;
@protocol OS_dispatch_source;

@interface MSAudioProgressView : UIView {
    UIImageView *_bufferingImageView;
    NSObject<OS_dispatch_source> *_bufferingTimer;
    MSPieImageView *_progressView;
    UIImageView *_stopImageView;
}

@property (copy, nonatomic) SUPlayerStatus *playerStatus;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_cancelBufferingTimer;
- (id)_newBufferingImageView;
- (id)_newProgressView;
- (void)_showBufferingImageView;

@end
