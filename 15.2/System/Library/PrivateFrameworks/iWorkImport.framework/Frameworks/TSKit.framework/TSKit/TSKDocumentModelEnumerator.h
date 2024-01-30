@class NSMutableArray;
@protocol TSKModel;

@interface TSKDocumentModelEnumerator : NSEnumerator {
    BOOL _stop;
    unsigned long long _flags;
}

@property (retain, nonatomic) id<TSKModel> root;
@property (retain, nonatomic) NSMutableArray *enumeratorStack;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic, getter=isEnumeratingForUserSearch) BOOL enumeratingForUserSearch;

- (id)nextObject;
- (void)addFilter:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEnumerator:(id)a0 filter:(id /* block */)a1;
- (void)enumerateUsingBlock:(id /* block */)a0;
- (id)initWithRootModelObject:(id)a0 filter:(id /* block */)a1;
- (id)initWithEnumerator:(id)a0 flags:(unsigned long long)a1 filter:(id /* block */)a2;
- (id)initWithRootModelObject:(id)a0 flags:(unsigned long long)a1 filter:(id /* block */)a2;

@end
