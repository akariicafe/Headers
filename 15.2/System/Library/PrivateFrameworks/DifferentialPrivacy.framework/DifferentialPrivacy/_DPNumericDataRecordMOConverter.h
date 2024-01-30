@interface _DPNumericDataRecordMOConverter : NSObject <_DPRecordConverter>

- (BOOL)copyRecord:(id)a0 intoManagedObject:(id)a1;
- (id)updateRecords:(id)a0 inManagedObjectContext:(id)a1;
- (id)insertRecord:(id)a0 inManagedObjectContext:(id)a1;
- (id)insertRecords:(id)a0 inManagedObjectContext:(id)a1;
- (id)createRecordFromManagedObject:(id)a0;

@end
