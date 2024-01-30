@interface _UIViewBlockVisitor : _UIViewVisitor

@property (copy, nonatomic) id /* block */ visitorBlock;

- (void)dealloc;
- (BOOL)_visitView:(id)a0;
- (id)initWithTraversalDirection:(unsigned long long)a0 visitorBlock:(id /* block */)a1;

@end
