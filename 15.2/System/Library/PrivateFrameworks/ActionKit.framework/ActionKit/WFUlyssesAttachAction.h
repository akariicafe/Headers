@interface WFUlyssesAttachAction : WFInterchangeAction

- (id)attachmentType;
- (BOOL)inputRequired;
- (BOOL)inputPassthrough;
- (id)contentDestinationWithError:(id *)a0;
- (id)inputContentClasses;

@end
