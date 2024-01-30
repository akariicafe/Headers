@class GCControllerDirectionPad, GCControllerButtonInput, GCDualSenseAdaptiveTrigger;

@interface GCDualSenseGamepad : GCExtendedGamepad

@property (readonly, nonatomic) GCControllerButtonInput *touchpadButton;
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadPrimary;
@property (readonly, nonatomic) GCControllerDirectionPad *touchpadSecondary;
@property (readonly, nonatomic) GCDualSenseAdaptiveTrigger *leftTrigger;
@property (readonly, nonatomic) GCDualSenseAdaptiveTrigger *rightTrigger;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithController:(id)a0;
- (void)initializeExtraControllerElements;
- (void)_activateExtendedSupport;
- (void)populateEncodedInitInfo:(struct { struct { id x0; BOOL x1; BOOL x2; union { struct { int x0; BOOL x1; float x2; long long x3; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; id x8; id x9; } x0[16]; BOOL x1; BOOL x2; } *)a0;

@end
