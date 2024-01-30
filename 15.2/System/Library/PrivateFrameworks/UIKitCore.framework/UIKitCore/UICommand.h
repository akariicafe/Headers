@class NSString, NSArray, UIImage, NSPointerArray;

@interface UICommand : UIMenuElement <_UIMenuLeaf, _UIMenuStateObserverableLeaf>

@property (readonly, nonatomic) id _target;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) id propertyList;
@property (nonatomic) unsigned int attributes : 32;
@property (nonatomic) unsigned int state : 32;
@property (readonly, nonatomic) NSArray *alternates;
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput;
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, getter=_getStateObservers, setter=_setStateObservers:) NSPointerArray *stateObservers;

+ (BOOL)supportsSecureCoding;
+ (id)_defaultCommandForAction:(SEL)a0;
+ (id)_defaultCommands;
+ (id)commandWithTitle:(id)a0 imageName:(id)a1 action:(SEL)a2;
+ (id)commandWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 propertyList:(id)a3;
+ (id)commandWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 propertyList:(id)a3 alternates:(id)a4;

- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2 action:(SEL)a3 propertyList:(id)a4 alternates:(id)a5 discoverabilityTitle:(id)a6 attributes:(unsigned long long)a7 state:(long long)a8;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (void)_setState:(long long)a0 notifyingObservers:(BOOL)a1;
- (void)setSubtitle:(id)a0;
- (id)_validatedLeafWithAlternate:(id)a0 target:(id)a1 validation:(id)a2;
- (long long)_leafKeyModifierFlags;
- (BOOL)isLeaf;
- (void)encodeWithCoder:(id)a0;
- (void)_addStateObserver:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (id)_leafAlternates;
- (BOOL)_isDefaultCommand;
- (id)_leafKeyInput;
- (void)_removeStateObserver:(id)a0;
- (id)_resolvedTargetFromFirstTarget:(id)a0;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)_immutableCopy;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (id)_alternateForModifierFlags:(long long)a0;
- (void)_performWithTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTitle:(id)a0;
- (void)setImage:(id)a0;
- (id)initWithCommand:(id)a0;

@end
