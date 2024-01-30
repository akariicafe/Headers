@interface SKWeakReference : NSObject

@property (weak, nonatomic) id object;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
