@class SBTransientOverlayViewController;

@interface SBTransientOverlayPresentationRequest : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL shouldDismissSiri;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;
- (id)initWithViewController:(id)a0;

@end
