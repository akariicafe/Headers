@class NSString, UIImageView, NSTimer, UILabel, NSDate;

@interface CAMElapsedTimeView : UIView

@property (readonly, nonatomic) UILabel *_timeLabel;
@property (readonly, nonatomic) UIImageView *_backgroundView;
@property (readonly, nonatomic) NSTimer *_updateTimer;
@property (readonly, nonatomic) NSDate *_startTime;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, getter=isShowingBackground) BOOL showingBackground;
@property (nonatomic) long long backgroundStyle;
@property (copy, nonatomic) NSString *contentSizeCategory;

+ (id)elapsedTimeFormatter;

- (void)_updateText;
- (void)startTimer;
- (void)endTimer;
- (void)resetTimer;
- (id)initWithLayoutStyle:(long long)a0;
- (void)_updateFont;
- (void)_updateForTimer:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundStyle:(long long)a0 animated:(BOOL)a1;
- (void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_setStartTime:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateBackgroundViewAnimated:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithBadgeAppearance;
- (void)setShowingBackground:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
