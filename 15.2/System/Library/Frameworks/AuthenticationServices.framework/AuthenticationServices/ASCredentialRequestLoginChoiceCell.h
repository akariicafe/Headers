@class ASCAuthorizationPresentationContext, NSString, UIImageView, UIImage, AKASAuthorizationProvider, UILabel;
@protocol ASCLoginChoiceProtocol;

@interface ASCredentialRequestLoginChoiceCell : UITableViewCell {
    id<ASCLoginChoiceProtocol> _loginChoice;
    ASCAuthorizationPresentationContext *_presentationContext;
    AKASAuthorizationProvider *_authorizationProvider;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_iconImageView;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL isSelectedLoginChoice;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (id)initWithLoginChoice:(id)a0 presentationContext:(id)a1 authorizationProvider:(id)a2;
- (void)_setUpFormat;
- (void)_setUpContent;
- (id)_cellLabelFontWithStyle:(id)a0 traits:(unsigned int)a1;
- (double)_leadingIconImageOffset;
- (void)_showIconBorder;
- (id)_detailTextForPasswordLoginChoice:(id)a0;
- (id)_titleForPublicKeyCredentialAssertionWithName:(id)a0 userHandle:(id)a1;
- (id)_publicKeyCredentialImageForPresentationContext:(id)a0;
- (id)_subtitleForPublicKeyCredentialAssertion;
- (void)_hideIconBorder;
- (id)_detailTextForPasswordLoginChoiceFromKeychain:(id)a0;
- (id)_detailTextForExternalPasswordLoginChoice:(id)a0;

@end
