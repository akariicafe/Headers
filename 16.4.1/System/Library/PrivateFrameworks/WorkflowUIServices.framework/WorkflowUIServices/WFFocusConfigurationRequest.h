@class LNAction, NSArray, WFColor, WFContextualAction, LNFocusConfigurationSuggestionContext, LNFullyQualifiedActionIdentifier;

@interface WFFocusConfigurationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) LNAction *action;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, copy, nonatomic) LNFullyQualifiedActionIdentifier *actionIdentifier;
@property (readonly, copy, nonatomic) LNFocusConfigurationSuggestionContext *suggestionContext;
@property (readonly, copy, nonatomic) NSArray *footerButtons;
@property (readonly, copy, nonatomic) WFColor *mastheadTintColor;
@property (readonly, nonatomic) WFContextualAction *contextualAction;
@property (readonly, nonatomic) BOOL showsEnablementButton;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)initWithContextualAction:(id)a0 footerButtons:(id)a1 showsEnablementButton:(BOOL)a2 isEnabled:(BOOL)a3 mastheadTintColor:(id)a4;
- (id)initWithContextualActionOptions:(id)a0;
- (id)initWithFocusConfigurationActionIdentifier:(id)a0 action:(id)a1 suggestionContext:(id)a2 footerButtons:(id)a3 showsEnablementButton:(BOOL)a4 isEnabled:(BOOL)a5;
- (void)loadFocusActionWithCompletion:(id /* block */)a0;

@end
