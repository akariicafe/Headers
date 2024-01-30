@interface HDWorkoutBuilderAssociatedSampleTemporaryTableEntity : HDHealthEntity

+ (BOOL)isTemporary;
+ (id)disambiguatedDatabaseTable;
+ (BOOL)withLocalTableName:(id)a0 error:(id *)a1 block:(id /* block */)a2;

@end
