@interface HDServiceEntity : HDHealthEntity

+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (BOOL)setHealthUpdatesEnabled:(BOOL)a0 forDevice:(id)a1 inDatabase:(id)a2 error:(id *)a3;
+ (id)_servicePredicate:(id)a0;
+ (id)tableAliases;
+ (id)insertOrUpdateService:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;
+ (BOOL)deleteService:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)allServicesWithProfile:(id)a0 error:(id *)a1;
+ (BOOL)healthUpdatesEnabledForDevice:(id)a0 inDatabase:(id)a1 error:(id *)a2;
+ (id)_servicesWithDatabaseTransaction:(id)a0 profile:(id)a1 removals:(id *)a2;
+ (long long)protectionClass;

@end
