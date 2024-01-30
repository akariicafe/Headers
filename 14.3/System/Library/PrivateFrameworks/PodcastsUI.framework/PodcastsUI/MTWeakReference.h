@interface MTWeakReference : NSObject

@property (weak, nonatomic) id object;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end
