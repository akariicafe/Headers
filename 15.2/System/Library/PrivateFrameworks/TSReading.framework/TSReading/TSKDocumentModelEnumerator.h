@class NSMutableArray;
@protocol TSKModel;

@interface TSKDocumentModelEnumerator : NSEnumerator {
    BOOL _stop;
}

@property (retain, nonatomic) id<TSKModel> root;
@property (retain, nonatomic) NSMutableArray *enumeratorStack;
@property (copy, nonatomic) id /* block */ filter;
@property (nonatomic) BOOL filterBeforeAddingChildren;

- (id)nextObject;
- (void)dealloc;
- (id)initWithEnumerator:(id)a0 filter:(id /* block */)a1;
- (void)enumerateUsingBlock:(id /* block */)a0;
- (id)initWithRootModelObject:(id)a0 filter:(id /* block */)a1;
- (void)enumerateReferencedStylesUsingBlock:(id /* block */)a0;

@end
