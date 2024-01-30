@class NSArray, NSMutableDictionary;

@interface CPLDerivativesFilter : NSObject <NSSecureCoding> {
    NSMutableDictionary *_skipInfoForAssetChange;
    NSMutableDictionary *_skipInfoForMasterChange;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *plistDescription;

- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (BOOL)shouldDropDerivativeWithDropDerivativeRecipe:(id)a0;
- (id)_getTargetDictionaryForChangeType:(unsigned long long)a0;
- (id)_descriptionForStoredResponse:(id)a0 recordType:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_isValidDropDerivativeRecipeWithUTI:(id)a0 sourceType:(unsigned long long)a1 derivativeTypes:(id)a2 changeType:(unsigned long long)a3;
- (id)redactedDescription;
- (BOOL)mightDropSomeDerivativesForSourceType:(unsigned long long)a0 forChangeType:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)addServerDropDerivativesRecipes:(id)a0;
- (BOOL)addServerDropDerivativesRecipe:(id)a0;
- (id)init;
- (void)_enumerateDropDerivativeRules:(id)a0 ofType:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateDropDerivativeRulesWithBlock:(id /* block */)a0;
- (void)reset;

@end
