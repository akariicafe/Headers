@class GCControllerDirectionPad, GCControllerButtonInput;

@interface GCDualShockGamepad : GCExtendedGamepad

@property (readonly, nonatomic) GCControllerButtonInput *touchpadButton;
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadPrimary;
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadSecondary;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithController:(id)a0;
- (void)initializeExtraControllerElements;
- (void)_activateExtendedSupport;

@end
