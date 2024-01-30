@protocol WFFocusConfigurationHostContextDelegate;

@interface WFFocusConfigurationHostContext : NSExtensionContext <WFFocusConfigurationServiceHostProtocol>

@property (weak, nonatomic) id<WFFocusConfigurationHostContextDelegate> focusConfigurationDelegate;

+ (id)_allowedItemPayloadClasses;
+ (id)_allowedErrorClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)configurationUIStateDidUpdate:(id)a0;
- (void)didPressButtonWithIdentifier:(id)a0 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
