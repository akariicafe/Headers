@class UILabel, NSArray, UIView;

@interface PUTimeCodeOverlayView : UIView {
    UILabel *_timecodeLabelView;
    UIView *_timecodeBackgroundView;
    UIView *_verticalLineView;
    NSArray *_overlayConstraints;
}

@property (nonatomic) double displayedTimeInterval;
@property (nonatomic) double frameRate;

- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)updateTimeDisplay;

@end
