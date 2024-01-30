@class WFContentProperty;

@interface WFContentItemAction : WFAction

@property (readonly, nonatomic) WFContentProperty *defaultProperty;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)inputContentClasses;
- (BOOL)outputsMultipleItems;
- (BOOL)inputsMultipleItems;

@end
