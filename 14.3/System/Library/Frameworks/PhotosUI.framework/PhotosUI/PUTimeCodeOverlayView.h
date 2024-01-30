@class UILabel, NSArray, UIView;

@interface PUTimeCodeOverlayView : UIView {
    UILabel *_timecodeLabelView;
    UIView *_timecodeBackgroundView;
    UIView *_verticalLineView;
    NSArray *_overlayConstraints;
}

@property (nonatomic) double displayedTimeInterval;

- (void).cxx_destruct;
- (void)updateTimeDisplay;
- (void)didMoveToSuperview;

@end
