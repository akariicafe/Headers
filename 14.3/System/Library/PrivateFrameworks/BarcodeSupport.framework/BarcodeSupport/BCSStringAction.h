@interface BCSStringAction : BCSAction

- (void)performAction;
- (id)actionPickerItems;
- (void)performDefaultAction;
- (id)localizedDefaultActionDescription;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)initWithData:(id)a0 codePayload:(id)a1;

@end
