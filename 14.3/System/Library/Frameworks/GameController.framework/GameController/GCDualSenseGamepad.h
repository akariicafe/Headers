@class GCControllerDirectionPad, GCControllerButtonInput;

@interface GCDualSenseGamepad : GCExtendedGamepad

@property (readonly, nonatomic) GCControllerButtonInput *touchpadButton;
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadPrimary;
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadSecondary;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithController:(id)a0;
- (void)initializeExtraControllerElements;
- (void)_activateExtendedSupport;

@end
