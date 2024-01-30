@class CKComponent;

@interface WFAccessibilityActionComponent : CKCompositeComponent

@property (readonly, nonatomic) CKComponent *componentToActivate;

+ (id)newWithAttributes:(const void *)a0 componentToActivate:(id)a1 component:(id)a2;

- (void).cxx_destruct;

@end
