@interface SKWeakReference : NSObject

@property (weak, nonatomic) id object;

- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
