@class ASCAuthorizationPresentationContext, NSString, UIImageView, UIImage, AKASAuthorizationProvider, UILabel, UIStackView;
@protocol ASCLoginChoiceProtocol;

@interface ASCredentialRequestLoginChoiceCell : UITableViewCell {
    id<ASCLoginChoiceProtocol> _loginChoice;
    ASCAuthorizationPresentationContext *_presentationContext;
    AKASAuthorizationProvider *_authorizationProvider;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_iconImageView;
    UIStackView *_iconAndTextStackView;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL isSelectedLoginChoice;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_setUpContent;
- (void)_updateAccessoryImageView;
- (BOOL)_shouldUseAppIconImageViewStyle;
- (double)_additionalLeadingSeparatorInset;
- (id)_cableIcon;
- (void)_configureIconImageStyle;
- (void)_configureImageViewForAppIcon;
- (void)_configureImageViewForSymbolImage;
- (id)_defaultPasskeyIcon;
- (id)_detailTextForExternalPasswordLoginChoice:(id)a0;
- (id)_detailTextForPasswordLoginChoice:(id)a0;
- (id)_detailTextForPasswordLoginChoiceFromKeychain:(id)a0;
- (id)_emptyRadioButtonImage;
- (id)_publicKeyCredentialImageForPresentationContext:(id)a0;
- (id)_selectedRadioButtonImage;
- (void)_setUpAccessoryImageView;
- (void)_setUpFormat;
- (id)_subtitleForPublicKeyCredentialAssertion;
- (id)_titleForPublicKeyCredentialAssertionWithName:(id)a0 identifier:(id)a1;
- (void)_updateLayoutForCurrentContentSizeCategory;
- (id)initWithLoginChoice:(id)a0 presentationContext:(id)a1 authorizationProvider:(id)a2;

@end
