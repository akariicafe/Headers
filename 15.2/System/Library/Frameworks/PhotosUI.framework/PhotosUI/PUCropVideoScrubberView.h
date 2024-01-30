@class AVTimeFormatter, NSLayoutConstraint, UISlider, UILabel, NSObject;
@protocol PUCropVideoScrubberViewDelegate;

@interface PUCropVideoScrubberView : UIView {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startingTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _endingTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentTime;
    AVTimeFormatter *_beforeTimeFormatter;
    AVTimeFormatter *_afterTimeFormatter;
    BOOL _beforeTimeLabelOffset;
    BOOL _afterTimeLabelOffset;
    NSLayoutConstraint *_beforeLabelVerticalConstraint;
    NSLayoutConstraint *_afterLabelVerticalConstraint;
}

@property (retain, nonatomic) UISlider *scrubberSlider;
@property (retain, nonatomic) UILabel *beforeTimeLabel;
@property (retain, nonatomic) UILabel *afterTimeLabel;
@property (weak, nonatomic) NSObject<PUCropVideoScrubberViewDelegate> *delegate;

- (void)layoutSubviews;
- (void)videoScrubberValueChanged:(id)a0;
- (void)offsetTimeLabelsIfNecessary;
- (void)setCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)initWithStartingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 endingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 currentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)videoScrubberDoneChanging;
- (void)timesChanged:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 endingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 currentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)updateSliderPosition;

@end
