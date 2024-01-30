@class NSDictionary;

@interface WBSPasswordGenerationManager : NSObject {
    struct _LXLexicon { } *_lexiconForEnglish;
    struct _LXLexicon { } *_lexiconForUserLocale;
}

@property (class, readonly, nonatomic) unsigned long long minimumPasswordLength;

@property (copy, nonatomic) NSDictionary *passwordRequirementsByDomain;

+ (id)requirementsForPasswordRuleSet:(id)a0 respectingMinLength:(id)a1 maxLength:(id)a2;
+ (BOOL)passwordLooksLikePasswordManagerGeneratedPassword:(id)a0;

- (BOOL)passwordGenerationIsDisallowedByRequirements:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_lexiconEnumerateEntries:(struct _LXLexicon { } *)a0 forString:(id)a1 completionHandler:(id /* block */)a2;
- (id)_moreTypeablePassword;
- (BOOL)_tokensContainUnwantedWords:(id)a0;
- (id)defaultRequirementsForDomain:(id)a0;
- (BOOL)manualPasswordGenerationIsDisallowedByRequirements:(id)a0;
- (id)initWithPasswordRequirementsByDomain:(id)a0;
- (id)updatedRequirements:(id)a0 respectingMaxLength:(unsigned long long)a1;
- (id)generatedPasswordMatchingRequirements:(id)a0;
- (id)defaultRequirementsForURL:(id)a0;
- (id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)a0;

@end
