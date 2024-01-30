@interface SignpostSupportObjectFilter : NSObject

@property (readonly, copy, nonatomic) id /* block */ filterBlock;

- (void).cxx_destruct;
- (BOOL)passesObject:(id)a0;
- (id)initWithFilterBlock:(id /* block */)a0;

@end
