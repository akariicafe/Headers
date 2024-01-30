@interface BCSStringAction : BCSAction

- (void)performAction;
- (id)shortDescription;
- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)localizedDefaultActionDescription;
- (id)actionIcon;
- (id)contentPreviewString;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (void)performActionWithOptions:(id)a0 completion:(id /* block */)a1;

@end
