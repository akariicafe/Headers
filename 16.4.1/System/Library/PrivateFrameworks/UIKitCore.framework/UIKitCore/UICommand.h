@class NSString, NSArray, UIImage, NSPointerArray, NSAttributedString;
@protocol UIPopoverPresentationControllerSourceItem;

@interface UICommand : UIMenuElement <_UIMenuLeaf, _UIMenuStateObserverableLeaf, UIMenuLeaf>

@property (nonatomic) BOOL _useSenderForResolvingTarget;
@property (readonly, nonatomic) id _target;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) id propertyList;
@property (nonatomic) unsigned int attributes : 32;
@property (nonatomic) unsigned int state : 32;
@property (readonly, nonatomic) NSArray *alternates;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput;
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (readonly, nonatomic) id<UIPopoverPresentationControllerSourceItem> presentationSourceItem;
@property (readonly, nonatomic) id sender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, getter=_getStateObservers, setter=_setStateObservers:) NSPointerArray *stateObservers;

+ (BOOL)supportsSecureCoding;
+ (id)_defaultCommandForAction:(SEL)a0;
+ (id)_defaultCommands;
+ (id)commandWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 propertyList:(id)a3;
+ (id)commandWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 propertyList:(id)a3 alternates:(id)a4;
+ (id)commandWithTitle:(id)a0 imageName:(id)a1 action:(SEL)a2;
+ (id)commandWithTitle:(id)a0 imageName:(id)a1 attributes:(unsigned long long)a2 action:(SEL)a3;
+ (id)commandWithTitle:(id)a0 imageName:(id)a1 preferredDisplayMode:(unsigned long long)a2 action:(SEL)a3;

- (void)encodeWithCoder:(id)a0;
- (long long)_leafKeyModifierFlags;
- (id)initWithCoder:(id)a0;
- (void)performWithSender:(id)a0 target:(id)a1;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (id)_validatedLeafWithAlternate:(id)a0 target:(id)a1 validation:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setImage:(id)a0;
- (id)_leafKeyInput;
- (id)_identifier;
- (id)initWithCommand:(id)a0;
- (BOOL)_isLeaf;
- (BOOL)_isDefaultCommand;
- (BOOL)isEqual:(id)a0;
- (id)_leafAlternates;
- (id)_immutableCopy;
- (void)setSubtitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_resolvedTargetFromFirstTarget:(id)a0 sender:(id)a1;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (void)_addStateObserver:(id)a0;
- (id)_alternateForModifierFlags:(long long)a0;
- (id)_alternateForModifierFlags:(long long)a0 usingAlternates:(id)a1;
- (void)_performWithSender:(id)a0 handler:(id /* block */)a1;
- (void)_removeStateObserver:(id)a0;
- (void)_setState:(long long)a0 notifyingObservers:(BOOL)a1;
- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2 action:(SEL)a3 propertyList:(id)a4 alternates:(id)a5 discoverabilityTitle:(id)a6 attributes:(unsigned long long)a7 state:(long long)a8;

@end
