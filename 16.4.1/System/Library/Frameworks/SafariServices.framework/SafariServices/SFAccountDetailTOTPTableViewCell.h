@class UIListContentView, UIStackView, NSTimer, UILabel, WBSTOTPGenerator;

@interface SFAccountDetailTOTPTableViewCell : UITableViewCell {
    UILabel *_subtitleLabel;
    WBSTOTPGenerator *_generator;
    NSTimer *_codeUpdateTimer;
    UIListContentView *_verificationCodeContentView;
    UIStackView *_labelStackView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_startTOTPTimer;
- (id)_attributedSubtitleString;
- (id)_attributedSubtitleStringWithRemainingSeconds:(unsigned long long)a0;
- (id)_formattedCode;
- (void)_updateCodeAndLabels;
- (void)configureWithGenerator:(id)a0;

@end
