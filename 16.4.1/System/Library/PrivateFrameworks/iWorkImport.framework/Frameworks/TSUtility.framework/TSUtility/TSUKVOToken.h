@class NSString, NSObject;

@interface TSUKVOToken : NSObject

@property (readonly, nonatomic) NSObject *observer;
@property (readonly, nonatomic) NSObject *target;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) void *context;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObserver:(id)a0 target:(id)a1 keyPath:(id)a2 context:(void *)a3;

@end
