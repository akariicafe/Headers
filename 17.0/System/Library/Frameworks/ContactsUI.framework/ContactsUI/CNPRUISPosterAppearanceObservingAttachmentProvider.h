@class CNPRUISPosterAttachment, PRUISPosterAppearanceObservingAttachmentProvider, UIView;

@interface CNPRUISPosterAppearanceObservingAttachmentProvider : NSObject

@property (readonly, nonatomic) PRUISPosterAppearanceObservingAttachmentProvider *wrappedProvider;
@property (readonly, nonatomic) UIView *overlayContentView;
@property (readonly, nonatomic) UIView *obscurableContentView;
@property (readonly, nonatomic) UIView *vibrantObscurableContentView;
@property (readonly, nonatomic) CNPRUISPosterAttachment *obscurableContentAttachment;
@property (readonly, nonatomic) CNPRUISPosterAttachment *overlayContentAttachment;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)applyPosterAppearanceToObserver:(id)a0;

@end
