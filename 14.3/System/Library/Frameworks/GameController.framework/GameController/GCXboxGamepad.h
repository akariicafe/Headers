@class GCControllerButtonInput;

@interface GCXboxGamepad : GCExtendedGamepad

@property (nonatomic) long long type;
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton1;
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton2;
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton3;
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton4;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithController:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)initializeExtraControllerElements;

@end
