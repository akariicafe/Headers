@class _SFBrowserView;

@interface SFNanoDomainContainerView : UIView

@property (class, readonly, nonatomic) double defaultTopOffset;
@property (class, readonly, nonatomic) double defaultHeight;
@property (class, readonly, nonatomic) double defaultHeightInsideQuickboard;

@property (nonatomic) double maximumHeight;
@property (weak, nonatomic) _SFBrowserView *browserView;
@property (copy, nonatomic) id /* block */ platterTapAction;

- (void).cxx_destruct;
- (void)updateWithDomain:(id)a0 isSecure:(BOOL)a1 showsNotSecureAnnotation:(BOOL)a2;

@end
