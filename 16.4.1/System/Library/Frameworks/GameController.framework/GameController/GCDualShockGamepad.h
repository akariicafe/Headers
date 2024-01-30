@class GCControllerDirectionPad, GCControllerButtonInput;

@interface GCDualShockGamepad : GCExtendedGamepad

@property (readonly, nonatomic) GCControllerButtonInput *touchpadButton;
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadPrimary;
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadSecondary;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithController:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_activateExtendedSupport;
- (void)initializeExtraControllerElements;

@end
