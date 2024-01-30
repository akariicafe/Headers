@interface BCSURLPatternMatcher : NSObject

- (id)dictionaryFromQueryString:(id)a0 orderedKeys:(id *)a1;
- (id)extractedPathForAnyMatchUsingScanner:(id)a0 delimiter:(id)a1 extractedPath:(id)a2 countOfPathComponentsToMatch:(unsigned long long)a3;
- (id)extractedPathForExactMatchUsingScanner:(id)a0 delimiter:(id)a1 extractedPath:(id)a2 patternPathComponent:(id)a3;
- (id)extractedQueryByAddingKey:(id)a0 value:(id)a1 toExtractedQuery:(id)a2;
- (id)extractedURLForOriginalURL:(id)a0 originalURLPathComponents:(id)a1 extractedPath:(id)a2 extractedQuery:(id)a3;
- (BOOL)isAnyMatchFoundForPathPattern:(id)a0 countOfPathComponents:(long long *)a1 error:(id *)a2;
- (BOOL)isValidDomainForURL:(id)a0 domainBundleIDPatterns:(id)a1;
- (id)matchPattern:(id)a0 withURL:(id)a1 forBundleID:(id)a2 expirationDate:(id)a3 error:(id *)a4;
- (id)orderedKeysForPatternQuery:(id)a0 originalURLQuery:(id)a1 orderedOriginalURLQueryKeys:(id)a2;

@end
