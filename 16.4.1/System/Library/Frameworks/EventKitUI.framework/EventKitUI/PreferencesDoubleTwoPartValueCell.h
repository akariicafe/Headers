@class UILabel, TwoPartTextLabel;

@interface PreferencesDoubleTwoPartValueCell : PreferencesTwoPartValueCell {
    UILabel *_textLabel2;
    TwoPartTextLabel *_twoPartLabel2;
}

@property (readonly, retain, nonatomic) UILabel *textLabel2;
@property (readonly, retain, nonatomic) TwoPartTextLabel *twoPartTextLabel2;

- (void).cxx_destruct;
- (void)_layoutSubviewsCore;
- (void)checkValueWidths;
- (void)layoutText:(id)a0 andValue:(id)a1;

@end
