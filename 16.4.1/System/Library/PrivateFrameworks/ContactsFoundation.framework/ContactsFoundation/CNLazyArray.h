@class NSArray, NSMutableArray;
@protocol _CNLazyArrayOperation;

@interface CNLazyArray : NSObject <NSFastEnumeration>

@property (retain) id<_CNLazyArrayOperation> operationChain;
@property (readonly) NSMutableArray *output;
@property (readonly) NSArray *allObjects;
@property (readonly) id firstObject;
@property (readonly) id lastObject;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithSource:(id)a0;
- (id)initWithArray:(id)a0;
- (id /* block */)filter;
- (id /* block */)none;
- (id /* block */)map;
- (id /* block */)skip;
- (id /* block */)reduce;
- (id /* block */)contains;
- (id)init;
- (id)initWithEnumerator:(id)a0;
- (id /* block */)all;
- (void).cxx_destruct;
- (id)distinct;
- (id /* block */)take;
- (id /* block */)any;
- (void)consumeToIndex:(unsigned long long)a0;
- (id /* block */)flatMap;
- (id /* block */)compactMap;
- (void)consumeAllObjects;
- (BOOL)consumeNextObject;
- (id /* block */)doOnNext;
- (id)initWithFastEnumeration:(id)a0;
- (id)initWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3;
- (id /* block */)skipLast;
- (id /* block */)takeLast;

@end
