@interface IDSCKQueryOperation : IDSCKDatabaseOperation

@property (copy, nonatomic) id /* block */ recordFetchedBlock;
@property (copy) id /* block */ completionBlock;

+ (id)alloc;
+ (Class)__class;

- (void).cxx_destruct;

@end
