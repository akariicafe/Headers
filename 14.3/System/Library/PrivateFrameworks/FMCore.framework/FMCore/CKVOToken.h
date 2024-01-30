@class NSString;

@interface CKVOToken : NSObject

@property (readonly, copy, nonatomic) NSString *keypath;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) void *context;

- (void).cxx_destruct;
- (id)description;
- (id)initWithKeyPath:(id)a0 index:(long long)a1 block:(id /* block */)a2;

@end
