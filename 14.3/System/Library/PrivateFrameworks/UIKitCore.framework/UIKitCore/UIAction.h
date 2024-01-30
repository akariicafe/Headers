@class NSString, UIImage;

@interface UIAction : UIMenuElement <_UIMenuLeaf>

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;
@property (readonly, nonatomic) id sender;
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)actionWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 handler:(id /* block */)a3;
+ (id)actionWithHandler:(id /* block */)a0;

- (long long)_leafKeyModifierFlags;
- (id)initWithAction:(id)a0;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isLeaf;
- (id)_immutableCopy;
- (id)_validatedLeafWithAlternate:(id)a0 target:(id)a1 validation:(id)a2;
- (id)_leafKeyInput;
- (id)initWithCoder:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (id)_leafAlternates;
- (id)_resolvedTargetFromFirstTarget:(id)a0;
- (void)_performActionWithSender:(id)a0;
- (void)setTitle:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 discoverabilityTitle:(id)a3 attributes:(unsigned long long)a4 state:(long long)a5 handler:(id /* block */)a6;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (id)_spiRepresentation;
- (void)setImage:(id)a0;
- (void)_performWithTarget:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isDefaultCommand;

@end
