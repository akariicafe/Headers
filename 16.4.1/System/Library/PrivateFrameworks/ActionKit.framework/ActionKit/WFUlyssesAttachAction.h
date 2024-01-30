@interface WFUlyssesAttachAction : WFInterchangeAction

- (id)attachmentType;
- (id)contentDestinationWithError:(id *)a0;
- (id)inputContentClasses;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;

@end
