@class NSString;

@interface CKVOToken : NSObject

@property (readonly, copy, nonatomic) NSString *keypath;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) void *context;

- (id)initWithKeyPath:(id)a0 index:(long long)a1 block:(id /* block */)a2;
- (id)description;
- (void).cxx_destruct;

@end
