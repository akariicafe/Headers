@interface IDSCKQueryOperation : IDSCKDatabaseOperation

@property (copy, nonatomic) id /* block */ recordFetchedBlock;
@property (copy) id /* block */ completionBlock;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;

@end
