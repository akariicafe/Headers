@class NSString, UIImage, NSArray;

@interface UICommand : UIMenuElement <_UIMenuLeaf>

@property (readonly, nonatomic) id _target;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) id propertyList;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSArray *alternates;
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)commandWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 propertyList:(id)a3;
+ (id)commandWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 propertyList:(id)a3 alternates:(id)a4;
+ (id)_defaultCommands;
+ (id)commandWithTitle:(id)a0 imageName:(id)a1 action:(SEL)a2;
+ (id)_defaultCommandForAction:(SEL)a0;

- (long long)_leafKeyModifierFlags;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2 action:(SEL)a3 propertyList:(id)a4 alternates:(id)a5 discoverabilityTitle:(id)a6 attributes:(unsigned long long)a7 state:(long long)a8;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (BOOL)isLeaf;
- (id)initWithCommand:(id)a0;
- (id)_immutableCopy;
- (id)_validatedLeafWithAlternate:(id)a0 target:(id)a1 validation:(id)a2;
- (id)_leafKeyInput;
- (id)initWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 propertyList:(id)a3 alternates:(id)a4 discoverabilityTitle:(id)a5 attributes:(unsigned long long)a6 state:(long long)a7;
- (id)initWithCoder:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (id)_leafAlternates;
- (id)_resolvedTargetFromFirstTarget:(id)a0;
- (void)setTitle:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_alternateForModifierFlags:(long long)a0;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (void)setImage:(id)a0;
- (void)_performWithTarget:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isDefaultCommand;

@end
