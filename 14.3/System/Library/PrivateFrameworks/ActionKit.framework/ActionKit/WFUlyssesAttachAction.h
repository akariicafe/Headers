@interface WFUlyssesAttachAction : WFInterchangeAction

- (id)attachmentType;
- (BOOL)inputRequired;
- (BOOL)inputPassthrough;
- (id)inputContentClasses;

@end
