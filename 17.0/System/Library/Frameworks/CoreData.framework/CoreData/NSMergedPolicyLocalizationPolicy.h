@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
    NSSet *_mergedPolicies;
}

- (void)addPolicy:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
