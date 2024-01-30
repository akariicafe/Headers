@class MKFModelDatabaseID, NSUUID, Protocol, NSString, NSDate;

@interface _MKFModel : _MKFObject <MKFModel, MKFModelModelIDDefaults>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) MKFModelDatabaseID *databaseID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithModelID:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)modelWithModelID:(id)a0 context:(id)a1;

- (void)willSave;
- (id)redactedDescription;
- (BOOL)validateModelID:(id *)a0 error:(id *)a1;
- (id)castIfModel;
- (id)hmd_debugIdentifier;
- (BOOL)validateForInsertOrUpdate:(id *)a0;
- (BOOL)validateWriterTimestamp:(id *)a0 error:(id *)a1;

@end
