@interface REUIRelevanceEngineControllerUpdateOperation : REElementUpdateOperation

@property (readonly, nonatomic) unsigned long long updateType;

+ (id)hideElement:(id)a0 atPath:(id)a1;
+ (id)showElement:(id)a0 atPath:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
