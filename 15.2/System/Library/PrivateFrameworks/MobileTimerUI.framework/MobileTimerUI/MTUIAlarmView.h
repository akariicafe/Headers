@class UIFont, NSString, NSArray, MTUIDigitalClockLabel, UILabel, UISwitch, NSDictionary;

@interface MTUIAlarmView : NUIContainerGridView {
    id _contentSizeFontAdjustObserver;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *repeatText;
@property (retain, nonatomic) NSArray *currentConstraints;
@property (nonatomic) long long style;
@property (readonly, nonatomic) MTUIDigitalClockLabel *timeLabel;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIFont *nameFont;
@property (retain, nonatomic) UIFont *repeatFont;
@property (readonly, nonatomic) UISwitch *enabledSwitch;
@property (readonly, nonatomic) NSDictionary *viewsByIdentifier;
@property (nonatomic) BOOL shouldAddLayoutConstraints;
@property (nonatomic, getter=isSwitchVisible) BOOL switchVisible;

- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_loadFontsWithTextStyles;
- (void)tearDownContentSizeChangeObserver;
- (void)updatePreferredMaxLayoutWidthForDetailContainerLabels;
- (void)setName:(id)a0 andRepeatText:(id)a1 textColor:(id)a2;

@end
