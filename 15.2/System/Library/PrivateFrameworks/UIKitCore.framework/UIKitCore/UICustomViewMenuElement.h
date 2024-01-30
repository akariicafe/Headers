@class NSString, UIImage, UIView;

@interface UICustomViewMenuElement : UIMenuElement <_UIMenuLeaf>

@property (copy, nonatomic) id /* block */ viewProvider;
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput;
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementWithViewProvider:(id /* block */)a0;

- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)_validatedLeafWithAlternate:(id)a0 target:(id)a1 validation:(id)a2;
- (long long)_leafKeyModifierFlags;
- (BOOL)isLeaf;
- (void)encodeWithCoder:(id)a0;
- (id)_leafAlternates;
- (BOOL)_isDefaultCommand;
- (id)_leafKeyInput;
- (id)_resolvedTargetFromFirstTarget:(id)a0;
- (id)_immutableCopy;
- (BOOL)isLoadingPlaceholder;
- (void)_performWithTarget:(id)a0;
- (void).cxx_destruct;

@end
