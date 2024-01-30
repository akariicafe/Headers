@interface CKPersistentStoreHandler : NSObject {
    void /* unknown type, empty encoding */ connection;
}

+ (id)inMemoryHandler;

- (BOOL)removeValueForKey:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)removeValuesForKeys:(id)a0 error:(id *)a1;
- (BOOL)removeValuesMatching:(id)a0 error:(id *)a1;
- (BOOL)removeAllValuesAndReturnError:(id *)a0;
- (id)keysAndReturnError:(id *)a0;
- (id)keysMatching:(id)a0 error:(id *)a1;
- (id)valuesAndReturnError:(id *)a0;
- (id)valuesForKeysMatching:(id)a0 error:(id *)a1;
- (id)keysAndValuesAndReturnError:(id *)a0;
- (id)keysAndValuesForKeysMatching:(id)a0 error:(id *)a1;
- (id)_valuesForKeys:(id)a0 error:(id *)a1;
- (BOOL)saveKeysAndValues:(id)a0 error:(id *)a1;
- (BOOL)dropLinksWithLabel:(id)a0 from:(id)a1 error:(id *)a2;
- (id)tripleComponentsMatching:(id)a0 error:(id *)a1;
- (BOOL)setWeightForLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2 toValue:(long long)a3 error:(id *)a4;
- (long long)increaseWeightForLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2;
- (long long)decreaseWeightForLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2;
- (BOOL)dropLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2 error:(id *)a3;
- (BOOL)dropLinksBetween:(id)a0 and:(id)a1 error:(id *)a2;
- (id)initWithName:(id)a0;

@end
