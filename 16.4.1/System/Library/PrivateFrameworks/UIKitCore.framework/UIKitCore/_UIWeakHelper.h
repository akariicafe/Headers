@interface _UIWeakHelper : NSObject

@property (copy, nonatomic) id /* block */ deallocationBlock;

- (id)initWithDeallocationBlock:(id /* block */)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
