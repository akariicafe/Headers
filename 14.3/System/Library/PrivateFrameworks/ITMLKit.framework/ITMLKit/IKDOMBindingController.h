@class NSString, IKDOMElement, NSDictionary, IKAppContext, IKJSDataItem, NSMutableArray, _IKDOMMutationRuleSet, IKDataBinding;
@protocol IKDOMBindingStrategy;

@interface IKDOMBindingController : NSObject <IKJSDataObserving> {
    NSDictionary *_bindingKeysByPathString;
    struct { BOOL hasKeysAffectingChildren; BOOL hasKeysAffectingSubtree; BOOL hasPrototypeDependentKeys; BOOL hasValueDidChangeForKey; BOOL hasDidResolveKeys; } _strategyFlags;
    NSMutableArray *_scheduledUpdaters;
}

@property (readonly, nonatomic) _IKDOMMutationRuleSet *mutationRuleSet;
@property (readonly, nonatomic) NSDictionary *prototypeGroupsByType;
@property (readonly, nonatomic) unsigned long long resolutionTarget;
@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly, weak, nonatomic) IKDOMElement *domElement;
@property (readonly, weak, nonatomic) IKDOMBindingController *parent;
@property (readonly, nonatomic) IKDataBinding *binding;
@property (readonly, weak, nonatomic) IKJSDataItem *dataItem;
@property (readonly, nonatomic) id<IKDOMBindingStrategy> strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedBindingForDOMElement:(id)a0;
+ (id)instantiateDOMElementForItem:(id)a0 withPrototype:(id)a1 parentDOMElement:(id)a2 existingDOMElement:(id)a3;
+ (id)_parsedMutationRulesForDOMElement:(id)a0;
+ (id)_prototypeGroupsByTypeForDOMElement:(id)a0;
+ (void)prepareForDOMElement:(id)a0;
+ (id)domBindingControllerForDOMElement:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDOMElement:(id)a0;
- (void)dataObservable:(id)a0 didChangePropertyPathWithString:(id)a1 extraInfo:(id)a2;
- (void)scheduleUpdateUsingPreUpdate:(id /* block */)a0 update:(id /* block */)a1;
- (BOOL)_canBeReused;
- (void)_resolveBinding;
- (void)_evaluateMutationRules;
- (id)findPrototypeForDataItem:(id)a0;

@end
