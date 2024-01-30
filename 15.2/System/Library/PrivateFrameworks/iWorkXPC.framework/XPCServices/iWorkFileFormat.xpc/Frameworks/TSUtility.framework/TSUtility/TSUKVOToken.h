@class NSString, NSObject;

@interface TSUKVOToken : NSObject

@property (readonly, nonatomic) NSObject *observer;
@property (readonly, nonatomic) NSObject *target;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) void *context;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithObserver:(id)a0 target:(id)a1 keyPath:(id)a2 context:(void *)a3;

@end
