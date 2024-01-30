@interface _UIViewBlockVisitor : _UIViewVisitor

@property (copy, nonatomic) id /* block */ visitorBlock;

- (BOOL)_visitView:(id)a0;
- (void)dealloc;
- (id)initWithTraversalDirection:(unsigned long long)a0 visitorBlock:(id /* block */)a1;

@end
