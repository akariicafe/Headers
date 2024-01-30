@interface SKWeakReference : NSObject

@property (weak, nonatomic) id object;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
