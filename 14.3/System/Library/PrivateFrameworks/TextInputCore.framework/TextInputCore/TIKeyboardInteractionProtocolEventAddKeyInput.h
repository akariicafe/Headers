@class NSString, TIKeyboardInput;

@interface TIKeyboardInteractionProtocolEventAddKeyInput : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    TIKeyboardInput *_keyboardInput;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)sendTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyInput:(id)a0 keyboardState:(id)a1;

@end
