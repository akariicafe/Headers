@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject

@property (weak, nonatomic) IKDOMNode *ownerJSNode;
@property (retain, nonatomic) NSMutableDictionary *featuresMap;
@property (readonly, nonatomic) BOOL containsUpdates;
@property (nonatomic, getter=isUpdated) BOOL updated;
@property (nonatomic, getter=isChildrenUpdated) BOOL childrenUpdated;
@property (nonatomic, getter=isSubtreeUpdated) BOOL subtreeUpdated;
@property (nonatomic, getter=isAutoHighlightRead) BOOL autoHighlightRead;
@property (nonatomic, getter=isBindingParsed) BOOL bindingParsed;
@property (nonatomic, getter=areRulesParsed) BOOL rulesParsed;
@property (nonatomic, getter=arePrototypesResolved) BOOL prototypesResolved;
@property (nonatomic, getter=isDataResolved) BOOL dataResolved;

+ (id)jsNodeDataForNode:(id)a0;

- (void).cxx_destruct;
- (id)featureForName:(id)a0;
- (void)setFeature:(id)a0 forName:(id)a1;

@end
