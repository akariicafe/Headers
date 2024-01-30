@class NSArray, IKDOMNode, NSString;

@interface IKDOMNodeList : IKJSObject <IKDOMObserver, IKJSDOMNodeList>

@property (retain, nonatomic) IKDOMNode *contextNode;
@property (readonly, copy, nonatomic) id /* block */ evaluationBlock;
@property (copy, nonatomic) NSArray *nodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long length;

+ (id)nodeListWithAppContext:(id)a0 contextNode:(id)a1 xpath:(id)a2;

- (void).cxx_destruct;
- (id)item:(long long)a0;
- (void)_updateNodes;
- (void)domDidUpdateForContextNode:(id)a0;
- (id)initWithAppContext:(id)a0 contextNode:(id)a1 evaluationBlock:(id /* block */)a2;

@end
