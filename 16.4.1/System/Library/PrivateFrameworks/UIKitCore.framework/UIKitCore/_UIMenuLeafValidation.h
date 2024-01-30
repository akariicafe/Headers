@class _UIValidatableCommand;

@interface _UIMenuLeafValidation : NSObject {
    _UIValidatableCommand *_validatedCommand;
}

- (id)init;
- (void).cxx_destruct;
- (id)validatedActionForTarget:(id)a0 action:(id)a1;
- (id)validatedCommandForTarget:(id)a0 command:(id)a1 alternate:(id)a2 sender:(id)a3;

@end
