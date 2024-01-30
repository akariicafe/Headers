@class NSArray, NSString, UIImage;
@protocol UIDeferredMenuElementDelegate;

@interface UIDeferredMenuElement : UIMenuElement <_UIMenuLeaf> {
    BOOL _cacheItems;
    BOOL _isSignalingFulfillment;
}

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
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementWithUncachedProvider:(id /* block */)a0;
+ (id)_elementCachingItems:(BOOL)a0 provider:(id /* block */)a1;
+ (id)elementWithProvider:(id /* block */)a0;

- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)_validatedLeafWithAlternate:(id)a0 target:(id)a1 validation:(id)a2;
- (long long)_leafKeyModifierFlags;
- (BOOL)isLeaf;
- (void)encodeWithCoder:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (id)_leafAlternates;
- (BOOL)_isDefaultCommand;
- (id)_leafKeyInput;
- (id)_resolvedTargetFromFirstTarget:(id)a0;
- (id)_immutableCopy;
- (BOOL)isLoadingPlaceholder;
- (void)_performWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_fulfillIfNecessary;

@end
