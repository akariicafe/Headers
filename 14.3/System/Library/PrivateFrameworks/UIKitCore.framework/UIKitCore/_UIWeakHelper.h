@interface _UIWeakHelper : NSObject

@property (copy, nonatomic) id /* block */ deallocationBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDeallocationBlock:(id /* block */)a0;

@end
