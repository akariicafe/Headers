@class UIImageView, UILabel, MCActionButton, MCUIGradientLabel;

@interface MCDetailsHeaderContentView : UIView {
    UILabel *_displayNameLabel;
    UILabel *_organizationNameLabel;
    MCUIGradientLabel *_trustedLabel;
    UIImageView *_checkmarkView;
    MCActionButton *_actionButton;
    int _headerMode;
    BOOL _isNewPayload;
    BOOL _isTrusted;
    BOOL _isSigned;
    BOOL _isExpired;
    BOOL _hidesUntrustedLabel;
    BOOL _useTrustedNomenclature;
    id _headerDelegate;
}

+ (void)_releaseGradients;
+ (id)_greenGradient;
+ (id)_redGradient;
+ (id)_grayGradient;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_displayNameLabel;
- (void)setDisplayName:(id)a0;
- (void)setOrganizationName:(id)a0;
- (void)layoutSubviews;
- (id)_scriptingInfo;
- (void)setDelegate:(id)a0;
- (void)setGradientColor:(int)a0;
- (void)_actionButtonPressed:(id)a0;
- (void)setIsSigned:(BOOL)a0;
- (void)setIsTrusted:(BOOL)a0;
- (void)setHidesUntrustedLabel:(BOOL)a0;
- (void)setUseTrustedNomenclature:(BOOL)a0;
- (void)hideActionButton;
- (id)_organizationNameLabel;
- (id)_trustedLabel;
- (id)_stringForSigned:(BOOL)a0 andTrusted:(BOOL)a1;
- (BOOL)_canFitTrustedStringForWidth:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mode:(int)a1;
- (void)setIsExpired:(BOOL)a0;
- (id)_gradientForSigned:(BOOL)a0 andTrusted:(BOOL)a1;
- (void)showActionButton;
- (void)setActionToInstall;
- (void)setActionToRemove;

@end
