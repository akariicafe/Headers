@class STStorageProgressView, NSString, UIImageView, UIActivityIndicatorView, UILabel, NSMutableArray, UIButton;

@interface STStorageTipCell : PSTableCell {
    NSMutableArray *_constraints;
    UIImageView *_appIconView;
    UILabel *_titleLabel;
    UIImageView *_checkIconView;
    UIButton *_enableButton;
    UIActivityIndicatorView *_spinner;
    UILabel *_progressLabel;
    STStorageProgressView *_progressView;
    BOOL _isOption;
    float _percent;
    NSString *_hformat;
    NSString *_h2format;
    double _titleWidth;
    double _enableWidth;
    double _progressWidth;
    double _nativeSpinnerWidth;
    float _prevPercent;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_activateOption;

@end
