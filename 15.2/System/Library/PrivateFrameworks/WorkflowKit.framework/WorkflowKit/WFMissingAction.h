@interface WFMissingAction : WFAction

@property (nonatomic) BOOL isForLocalization;

- (id)iconImage;
- (id)descriptionDictionary;
- (id)name;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)inputPassthrough;
- (BOOL)isMissing;

@end
