@interface WFBase64EncodingAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (id)inputContentClasses;
- (id)base64EncodedStringItemFromFile:(id)a0 lineBreakMode:(id)a1;
- (id)itemFromBase64EncodedString:(id)a0 nameIfKnown:(id)a1;

@end
