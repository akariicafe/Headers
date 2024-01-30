@class TIKeyboardState;

@interface TIKeyboardInteractionProtocolBase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TIKeyboardState *keyboardState;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyboardState:(id)a0;

@end
