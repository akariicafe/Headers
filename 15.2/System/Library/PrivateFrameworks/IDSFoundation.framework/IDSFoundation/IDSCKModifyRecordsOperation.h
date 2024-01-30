@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation

@property (copy, nonatomic) id /* block */ modifyRecordsCompletionBlock;
@property (nonatomic) long long savePolicy;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;

@end
