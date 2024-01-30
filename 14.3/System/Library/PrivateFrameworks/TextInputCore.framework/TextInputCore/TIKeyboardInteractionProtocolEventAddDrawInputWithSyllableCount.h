@class NSString, NSNumber;

@interface TIKeyboardInteractionProtocolEventAddDrawInputWithSyllableCount : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    NSNumber *_syllableCount;
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
- (id)initWithSyllableCount:(unsigned long long)a0 keyboardState:(id)a1;

@end
