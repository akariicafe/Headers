@class UIColor, NSString, NSMutableDictionary, CLKFont, UILabel, CLKDevice, NSMutableArray;

@interface NTKTimeIntervalLabel : UIView {
    CLKDevice *_device;
    double _currentTextTime;
    long long _style;
    UILabel *_label;
    UILabel *_suffix;
    UILabel *_prefix;
    NSString *_text;
    NSMutableArray *_digits;
    NSMutableDictionary *_images;
    double _staticLabelWidth;
    double _digitWidth;
    BOOL _isShowingDigits;
    BOOL _labelWasSized;
    BOOL _isSigned;
}

@property (nonatomic) double time;
@property (copy, nonatomic) NSString *suffix;
@property (nonatomic) BOOL suffixSmallCaps;
@property (copy, nonatomic) NSString *prefix;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) CLKFont *font;
@property (readonly, nonatomic) BOOL showSubSeconds;
@property (nonatomic) BOOL frozen;
@property (readonly, nonatomic) struct CGSize { double width; double height; } textSize;
@property (readonly, nonatomic) double actualWidth;
@property (copy, nonatomic) id /* block */ didResizeHandler;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setLabelText:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_localeChanged;
- (void).cxx_destruct;
- (double)_labelWidth;
- (void)recalculateSize;
- (id)_cachedImageForDigit:(unsigned long long)a0;
- (void)_invalidateDigitImages;
- (id)_localImageForDigit:(unsigned long long)a0;
- (void)calculateMetrics;
- (void)createDigitViews;
- (void)forceTime:(double)a0;
- (id)formatTimeInterval;
- (id)getTimeText;
- (id)initWithMonospacedFontOfSize:(double)a0 color:(id)a1 style:(long long)a2 forDevice:(id)a3;
- (id)initWithMonospacedFontOfSize:(double)a0 color:(id)a1 style:(long long)a2 signed:(BOOL)a3 forDevice:(id)a4;
- (id)initWithMonospacedFontOfSize:(double)a0 forDevice:(id)a1;
- (BOOL)shouldShowDigits;
- (void)sizeToFitLabelIfNeeded;

@end
