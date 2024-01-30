@class HDDatabaseTransaction, HDProfile, NSDictionary, HDSQLiteDatabase;

@interface HDEntityEncoder : NSObject

@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDDatabaseTransaction *transaction;
@property (readonly, nonatomic) HDSQLiteDatabase *database;
@property (readonly, nonatomic) Class entityClass;
@property (readonly, copy, nonatomic) NSDictionary *encodingOptions;
@property (readonly, copy, nonatomic) id /* block */ authorizationFilter;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) HDEntityEncoder *superclassEncoder;

+ (long long)estimatedEncodedSize;

- (void)finish;
- (id)objectForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)createBareObject;
- (id)orderedProperties;
- (id)initWithHealthEntityClass:(Class)a0 profile:(id)a1 transaction:(id)a2 purpose:(long long)a3 encodingOptions:(id)a4 authorizationFilter:(id /* block */)a5;
- (BOOL)generateCodableRepresentationsForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 maxBytesPerRepresentation:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;
- (id)initWithHealthEntityClass:(Class)a0 profile:(id)a1 database:(id)a2 purpose:(long long)a3 encodingOptions:(id)a4 authorizationFilter:(id /* block */)a5;
- (void)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2;

@end
