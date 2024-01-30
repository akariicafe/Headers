@interface WFGetDictionaryValueAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)setOutputWithValue:(id)a0 preferredDictionaryType:(id)a1 contentAttributionSet:(id)a2;

@end
