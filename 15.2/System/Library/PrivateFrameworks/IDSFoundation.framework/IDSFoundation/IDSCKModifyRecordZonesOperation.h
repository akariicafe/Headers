@class NSArray;

@interface IDSCKModifyRecordZonesOperation : IDSCKDatabaseOperation

@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock;
@property long long qualityOfService;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;

@end
