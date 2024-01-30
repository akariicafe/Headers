@interface BCSInvalidDataAction : BCSAction

- (id)actionPickerItems;
- (void)performDefaultAction;
- (id)localizedDefaultActionDescription;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (BOOL)isInvalidDataAction;

@end
