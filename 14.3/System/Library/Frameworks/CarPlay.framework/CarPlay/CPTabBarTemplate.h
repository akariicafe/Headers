@class NSArray, NAFuture, CPTemplate, CPInterfaceController, NSString;
@protocol CPTabBarTemplateDelegate, CPTabBarTemplateProviding;

@interface CPTabBarTemplate : CPTemplate <CPTabBarClientTemplateDelegate>

@property (class, readonly, nonatomic) unsigned long long maximumTabCount;

@property (nonatomic) unsigned long long indexOfSelectedTab;
@property (retain, nonatomic) id<CPTabBarTemplateProviding> templateProvider;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (weak, nonatomic) CPInterfaceController *interfaceController;
@property (weak, nonatomic) id<CPTabBarTemplateDelegate> delegate;
@property (readonly, nonatomic) NSArray *templates;
@property (readonly, nonatomic) CPTemplate *selectedTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setTrailingNavigationBarButtons:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)handleActionForControlIdentifier:(id)a0;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)a0;
- (id)trailingNavigationBarButtons;
- (void)validateTemplates:(id)a0;
- (id)initWithTemplates:(id)a0;
- (void)updateTemplates:(id)a0;

@end
