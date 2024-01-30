@class NSArray, NSString, UIImage;
@protocol UIDeferredMenuElementDelegate;

@interface UIDeferredMenuElement : UIMenuElement <_UIMenuLeaf>

@property (copy, nonatomic) id /* block */ elementProvider;
@property (retain, nonatomic) id metadata;
@property (weak, nonatomic) id<UIDeferredMenuElementDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *fulfilledElements;
@property (readonly, nonatomic) BOOL fulfilled;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementWithProvider:(id /* block */)a0;

- (long long)_leafKeyModifierFlags;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_fulfill;
- (BOOL)isLeaf;
- (id)_immutableCopy;
- (id)_validatedLeafWithAlternate:(id)a0 target:(id)a1 validation:(id)a2;
- (id)_leafKeyInput;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (id)_leafAlternates;
- (id)_resolvedTargetFromFirstTarget:(id)a0;
- (BOOL)isLoadingPlaceholder;
- (void)_performWithTarget:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isDefaultCommand;

@end
