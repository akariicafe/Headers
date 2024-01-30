@class _UIValidatableCommand;

@interface _UIMenuLeafValidation : NSObject {
    _UIValidatableCommand *_validatedCommand;
}

- (id)validatedCommandForTarget:(id)a0 command:(id)a1 alternate:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)validatedActionForTarget:(id)a0 action:(id)a1;

@end
