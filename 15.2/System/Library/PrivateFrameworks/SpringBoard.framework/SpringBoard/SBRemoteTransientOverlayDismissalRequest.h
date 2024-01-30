@class SBTransientOverlayViewController;

@interface SBRemoteTransientOverlayDismissalRequest : NSObject

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL shouldInvalidatePresentation;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
