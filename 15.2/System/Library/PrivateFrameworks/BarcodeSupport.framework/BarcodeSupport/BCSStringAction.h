@interface BCSStringAction : BCSAction

- (id)shortDescription;
- (void)performAction;
- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)contentPreviewString;
- (id)actionIcon;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (void)performActionWithOptions:(id)a0 completion:(id /* block */)a1;

@end
