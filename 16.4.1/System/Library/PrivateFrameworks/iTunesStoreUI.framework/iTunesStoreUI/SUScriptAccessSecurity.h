@interface SUScriptAccessSecurity : NSObject

- (BOOL)canAccessFacebookInFrame:(id)a0 error:(id *)a1;
- (id)_accessDictionaryForType:(id)a0;
- (BOOL)_canAccessType:(id)a0 inFrame:(id)a1 error:(id *)a2;
- (BOOL)_canAccessType:(id)a0 withURL:(id)a1 inFrame:(id)a2 error:(id *)a3;
- (id)_copyResourceURLsForWebFrame:(id)a0;
- (BOOL)_url:(id)a0 matchesExpressions:(id)a1;
- (BOOL)_urls:(id)a0 matchPatternStrings:(id)a1;
- (BOOL)canAccessFacebookWithURL:(id)a0 inFrame:(id)a1 error:(id *)a2;
- (BOOL)canAccessTelephonyInFrame:(id)a0 error:(id *)a1;

@end
