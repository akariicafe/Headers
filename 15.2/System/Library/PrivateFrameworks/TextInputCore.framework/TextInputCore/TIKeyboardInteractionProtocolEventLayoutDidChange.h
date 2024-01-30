@class TIKeyboardLayout, NSString;

@interface TIKeyboardInteractionProtocolEventLayoutDidChange : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>

@property (readonly, nonatomic) TIKeyboardLayout *keyLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)sendTo:(id)a0;
- (id)initWithLayout:(id)a0 keyboardState:(id)a1;

@end
