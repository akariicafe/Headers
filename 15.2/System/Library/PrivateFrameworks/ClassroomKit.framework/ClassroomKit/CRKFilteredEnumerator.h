@class NSEnumerator;

@interface CRKFilteredEnumerator : NSEnumerator

@property (readonly, nonatomic) NSEnumerator *enumerator;
@property (readonly, nonatomic) id /* block */ filterBlock;

- (id)nextObject;
- (void).cxx_destruct;
- (BOOL)shouldRejectItem:(id)a0;
- (id)initWithEnumerator:(id)a0 filterBlock:(id /* block */)a1;

@end
