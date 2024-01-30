@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
    NSSet *_mergedPolicies;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addPolicy:(id)a0;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)_localizedStringForKey:(id)a0 value:(void *)a1;

@end
