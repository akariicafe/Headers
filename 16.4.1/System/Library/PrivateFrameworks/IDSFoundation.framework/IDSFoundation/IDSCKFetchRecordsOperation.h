@class NSArray;

@interface IDSCKFetchRecordsOperation : IDSCKDatabaseOperation

@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordsCompletionBlock;

+ (id)alloc;
+ (Class)__class;

- (void).cxx_destruct;

@end
