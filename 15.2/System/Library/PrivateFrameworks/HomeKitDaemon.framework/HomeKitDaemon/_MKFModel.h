@class Protocol, NSUUID, MKFModelDatabaseID, NSString, NSDate;

@interface _MKFModel : _MKFObject <MKFModel, MKFModelPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, copy, nonatomic) MKFModelDatabaseID *databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *shortDescription;

+ (id)fetchRequest;
+ (Class)backingModelClass;
+ (id)modelWithModelID:(id)a0 context:(id)a1;
+ (id)modelWithModelID:(id)a0 context:(id)a1 error:(id *)a2;

- (void)willSave;
- (id)castIfModel;

@end
