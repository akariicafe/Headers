@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
    NSSet *_mergedPolicies;
}

- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (void)addPolicy:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
