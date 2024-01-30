@class NSArray, WFContextualAction, WFColor;

@interface WFFocusConfigurationContextualActionOptions : NSObject

@property (readonly, nonatomic) WFContextualAction *contextualAction;
@property (readonly, nonatomic) NSArray *footerButtons;
@property (readonly, copy, nonatomic) WFColor *mastheadTintColor;
@property (readonly, nonatomic) BOOL showsEnablementButton;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithContextualAction:(id)a0;
- (id)initWithContextualAction:(id)a0 footerButtons:(id)a1;
- (id)initWithContextualAction:(id)a0 footerButtons:(id)a1 showsEnablementButton:(BOOL)a2 isEnabled:(BOOL)a3;
- (id)initWithContextualAction:(id)a0 footerButtons:(id)a1 showsEnablementButton:(BOOL)a2 isEnabled:(BOOL)a3 mastheadTintColor:(id)a4;

@end
