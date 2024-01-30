@interface _HDDatabasePendingWriteRecord : NSObject

@property (readonly, copy, nonatomic) id /* block */ writeBlock;
@property (readonly, copy, nonatomic) id /* block */ completion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWriteBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end
