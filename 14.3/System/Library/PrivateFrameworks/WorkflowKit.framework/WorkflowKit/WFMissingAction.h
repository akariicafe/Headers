@interface WFMissingAction : WFAction

- (id)descriptionDictionary;
- (id)icon;
- (id)name;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)inputPassthrough;
- (BOOL)isMissing;

@end
