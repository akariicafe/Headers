@interface _UIWeakHelper : NSObject

@property (copy, nonatomic) id /* block */ deallocationBlock;

- (void).cxx_destruct;
- (id)initWithDeallocationBlock:(id /* block */)a0;
- (void)dealloc;

@end
