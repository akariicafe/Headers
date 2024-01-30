@class SBTransientOverlayViewController;

@interface SBRemoteTransientOverlayDismissalRequest : NSObject

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL shouldInvalidatePresentation;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithViewController:(id)a0;

@end
