@class NSURL;

@interface DDContextMenuConfiguration : UIContextMenuConfiguration

@property (nonatomic) BOOL prefersActionMenuStyle;
@property (nonatomic) BOOL expandPreviewOnInteraction;
@property (copy, nonatomic) id /* block */ interactionViewControllerProvider;
@property (retain, nonatomic) NSURL *interactionURL;

+ (id)configurationWithIdentifier:(id)a0 previewProvider:(id /* block */)a1 actionProvider:(id /* block */)a2;

- (void).cxx_destruct;
- (BOOL)performPreviewActionForMenuWithAnimator:(id)a0;

@end
