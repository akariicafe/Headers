@class NSURL;

@interface DDContextMenuConfiguration : UIContextMenuConfiguration

@property (nonatomic) BOOL prefersActionMenuStyle;
@property (nonatomic) BOOL expandPreviewOnInteraction;
@property (copy, nonatomic) id /* block */ interactionViewControllerProvider;
@property (retain, nonatomic) NSURL *interactionURL;

- (BOOL)performPreviewActionForMenuWithAnimator:(id)a0;
- (void).cxx_destruct;

@end
