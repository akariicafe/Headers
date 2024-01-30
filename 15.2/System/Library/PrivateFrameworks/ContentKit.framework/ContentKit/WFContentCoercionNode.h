@class NSOrderedSet;

@interface WFContentCoercionNode : NSObject

@property (readonly, nonatomic) id itemOrItemClass;
@property (readonly, nonatomic) WFContentCoercionNode *parent;
@property (readonly, nonatomic) NSOrderedSet *itemOrItemClassPath;
@property (readonly, nonatomic) NSOrderedSet *coercionPath;

+ (id)coercionNodeWithItem:(id)a0 parent:(id)a1;
+ (id)coercionNodeWithItemClass:(Class)a0 parent:(id)a1;
+ (id)coercionNodeWithItemOrItemClass:(id)a0 parent:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithItemOrItemClass:(id)a0 parent:(id)a1;
- (id)successorsWithOptions:(id)a0;
- (id)successorsWithOptions:(id)a0 goalType:(id)a1;
- (void)runCoercionWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)continueCoercionUsingPathEnumerator:(id)a0 contentItems:(id)a1 options:(id)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (id)runCoercionSynchronouslyWithOptions:(id)a0 error:(id *)a1;
- (id)continueCoercionUsingPathEnumerator:(id)a0 contentItems:(id)a1 options:(id)a2 error:(id *)a3;

@end
