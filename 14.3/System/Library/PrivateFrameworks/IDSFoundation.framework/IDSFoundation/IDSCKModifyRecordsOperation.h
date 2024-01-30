@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation

@property (copy, nonatomic) id /* block */ modifyRecordsCompletionBlock;
@property (nonatomic) long long savePolicy;

+ (id)alloc;
+ (Class)__class;

- (void).cxx_destruct;

@end
