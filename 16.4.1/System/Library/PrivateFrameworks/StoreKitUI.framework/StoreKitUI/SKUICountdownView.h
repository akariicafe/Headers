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

- (void)_reload;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (long long)_currentValue;
- (void)_currentRemainingDays:(long long *)a0 hours:(long long *)a1 minutes:(long long *)a2 seconds:(long long *)a3;
- (id)_newDateDescriptionLabel;
- (id)_newDateLabel;
- (id)_newFlapLabelWithPosition:(long long)a0;
- (id)_newNumberSeparatorLabel;
- (void)_reloadDateDescriptions:(BOOL)a0;
- (void)_reloadFontSizes;
- (void)_reloadNumber;
- (void)_reloadNumberFlapped;
- (void)_reloadTime;
- (void)_reloadTimeFlapped;
- (void)_setCountdownWithResponse:(id)a0 error:(id)a1;
- (id)initWithCountdown:(id)a0 clientContext:(id)a1;

@end
