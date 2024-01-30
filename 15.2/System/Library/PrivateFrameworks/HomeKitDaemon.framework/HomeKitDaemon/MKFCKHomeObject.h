@class NSUUID, MKFCKHome;

@interface MKFCKHomeObject : MKFCKModel

@property (copy, nonatomic) NSUUID *homeModelID;
@property (retain, nonatomic) MKFCKHome *home;

+ (BOOL)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;

- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (void)willSave;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)validateHome:(id *)a0 error:(id *)a1;
- (BOOL)validateHomeModelID:(id *)a0 error:(id *)a1;

@end
