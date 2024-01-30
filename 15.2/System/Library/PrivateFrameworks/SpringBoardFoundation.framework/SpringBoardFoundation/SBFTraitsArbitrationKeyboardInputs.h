@class NSString;

@interface SBFTraitsArbitrationKeyboardInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *keyboardOwningParticipantUniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithKeyboardOwningParticipantUniqueIdentifier:(id)a0;

@end
