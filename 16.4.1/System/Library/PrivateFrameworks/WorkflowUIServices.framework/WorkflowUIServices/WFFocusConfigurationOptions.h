@class LNAction, NSArray, LNFocusConfigurationSuggestionContext, LNFullyQualifiedActionIdentifier;

@interface WFFocusConfigurationOptions : NSObject

@property (readonly, copy, nonatomic) LNFullyQualifiedActionIdentifier *actionIdentifier;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) LNFocusConfigurationSuggestionContext *suggestionContext;
@property (readonly, nonatomic) NSArray *footerButtons;
@property (readonly, nonatomic) BOOL showsEnablementButton;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithFocusConfigurationAction:(id)a0;
- (id)initWithFocusConfigurationActionIdentifier:(id)a0 action:(id)a1;
- (id)initWithFocusConfigurationActionIdentifier:(id)a0 action:(id)a1 suggestionContext:(id)a2;
- (id)initWithFocusConfigurationActionIdentifier:(id)a0 action:(id)a1 suggestionContext:(id)a2 footerButtons:(id)a3;
- (id)initWithFocusConfigurationActionIdentifier:(id)a0 action:(id)a1 suggestionContext:(id)a2 footerButtons:(id)a3 showsEnablementButton:(BOOL)a4 isEnabled:(BOOL)a5;

@end
