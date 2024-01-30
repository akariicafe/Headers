@class NSSet, NSDictionary, NSPredicate, _HKFilter, HDSQLitePredicate;

@interface HDSampleQueryDescription : NSObject <NSCopying>

@property (readonly, copy, nonatomic) _HKFilter *filter;
@property (readonly, copy, nonatomic) NSSet *sampleTypes;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, copy, nonatomic) NSDictionary *encodingOptions;
@property (readonly, copy, nonatomic) NSSet *restrictedSourceEntities;
@property (readonly, copy, nonatomic) id /* block */ authorizationFilter;
@property (readonly, copy, nonatomic) HDSQLitePredicate *sqlitePredicate;

+ (id)sampleQueryDescriptionWithSampleType:(id)a0 predicate:(id)a1;
+ (id)sampleQueryDescriptionWithSampleType:(id)a0;
+ (id)sampleQueryDescriptionWithSampleTypes:(id)a0 predicate:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSampleTypes:(id)a0 predicate:(id)a1 encodingOptions:(id)a2 restrictedSourceEntities:(id)a3 authorizationFilter:(id /* block */)a4 filter:(id)a5 sqlitePredicate:(id)a6;
- (id)initWithSampleTypes:(id)a0 predicate:(id)a1 encodingOptions:(id)a2 restrictedSourceEntities:(id)a3 authorizationFilter:(id /* block */)a4 sqlitePredicate:(id)a5;

@end
