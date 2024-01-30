@interface WFShortcutResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithShortcutToConfirm:(id)a0;
+ (id)disambiguationWithShortcutsToDisambiguate:(id)a0;
+ (id)successWithResolvedShortcut:(id)a0;

@end
