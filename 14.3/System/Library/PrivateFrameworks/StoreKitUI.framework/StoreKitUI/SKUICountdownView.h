@class NSTimer, SKUICountdownViewTimerTarget, UIImage, SKUIClientContext, UIImageView, NSNumberFormatter, NSMutableArray, NSOperationQueue, UILabel, SKUICountdown;

@interface SKUICountdownView : UIView {
    NSTimer *_timer;
    SKUICountdownViewTimerTarget *_timerTarget;
    UILabel *_dateDescriptionLabelDay;
    UILabel *_dateDescriptionLabelHour;
    UILabel *_dateDescriptionLabelMinute;
    UILabel *_dateDescriptionLabelSecond;
    UILabel *_dateLabelDay;
    UILabel *_dateLabelHour;
    UILabel *_dateLabelMinute;
    UILabel *_dateLabelSecond;
    NSMutableArray *_dateFlapLabels;
    NSMutableArray *_numberFlapLabels;
    NSMutableArray *_numberSeparatorLabels;
    UIImageView *_imageView;
    UILabel *_numberLabel;
    NSNumberFormatter *_numberFormatter;
    NSOperationQueue *_operationQueue;
    double _factor;
}

@property (readonly, nonatomic) SKUICountdown *countdown;
@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) UIImage *backgroundImage;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)_reload;
- (void)layoutSubviews;
- (long long)_currentValue;
- (void)start;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setCountdownWithResponse:(id)a0 error:(id)a1;
- (void)_reloadFontSizes;
- (void)_reloadNumberFlapped;
- (void)_reloadNumber;
- (void)_reloadTimeFlapped;
- (void)_reloadDateDescriptions:(BOOL)a0;
- (void)_reloadTime;
- (id)_newNumberSeparatorLabel;
- (id)_newFlapLabelWithPosition:(long long)a0;
- (void)_currentRemainingDays:(long long *)a0 hours:(long long *)a1 minutes:(long long *)a2 seconds:(long long *)a3;
- (id)_newDateDescriptionLabel;
- (id)_newDateLabel;
- (id)initWithCountdown:(id)a0 clientContext:(id)a1;

@end
