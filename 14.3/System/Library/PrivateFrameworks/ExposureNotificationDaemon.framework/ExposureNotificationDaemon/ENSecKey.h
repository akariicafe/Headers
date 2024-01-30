@interface ENSecKey : NSObject

@property (readonly, nonatomic) struct __SecKey { } *keyRef;

+ (id)keyFromBase64String:(id)a0 keyClass:(const struct __CFString { } *)a1 error:(id *)a2;

- (void)dealloc;
- (id)initWithKeyRef:(struct __SecKey { } *)a0;

@end
