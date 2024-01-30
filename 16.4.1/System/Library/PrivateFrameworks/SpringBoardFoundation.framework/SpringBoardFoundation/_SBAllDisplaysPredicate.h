@interface _SBAllDisplaysPredicate : SBDisplayModePredicate

+ (id)sharedInstance;
+ (id)fromDefaultsKey:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)matchesDisplay:(id)a0;
- (id)defaultsKeyRepresentation;

@end
