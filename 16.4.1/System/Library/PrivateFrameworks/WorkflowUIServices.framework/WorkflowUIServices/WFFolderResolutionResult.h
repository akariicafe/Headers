@interface WFFolderResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithFolderToConfirm:(id)a0;
+ (id)disambiguationWithFoldersToDisambiguate:(id)a0;
+ (id)successWithResolvedFolder:(id)a0;

@end
