@class NSString;

@interface CKEntity : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ store;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)valuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)removeValueForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)setValue:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (id)valueForKey:(id)a0;
- (void)removeWithCompletionHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)valueForKey:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)linkTo:(id)a0 withPredicate:(id)a1 error:(id *)a2;
- (void)setValuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)linkTo:(id)a0 withPredicate:(id)a1 completionHandler:(id /* block */)a2;
- (void)unlinkTo:(id)a0 withPredicate:(id)a1 ignoreWeights:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)linksTo:(id)a0 matchType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)linksTo:(id)a0 matchType:(long long)a1 error:(id *)a2;

@end
