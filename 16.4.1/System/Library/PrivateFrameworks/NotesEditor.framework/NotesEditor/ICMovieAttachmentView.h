@class CALayer, UIImage;

@interface ICMovieAttachmentView : ICImageAttachmentView

@property (retain, nonatomic) CALayer *playButtonLayer;
@property (retain, nonatomic) UIImage *playButtonImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playButtonFrame;
@property (nonatomic) BOOL icaxIsShowingPlayer;

- (id)accessibilityLabel;
- (BOOL)accessibilityIgnoresInvertColors;
- (id)accessibilityUserInputLabels;
- (void).cxx_destruct;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)willDeleteAttachment;
- (id)placeholderImageSystemName;
- (void)updateImageSize;
- (void)didTapAttachment:(id)a0;
- (id)icaxHintString;
- (void)setShowLoadingImage:(BOOL)a0;
- (void)sharedInit:(BOOL)a0;
- (BOOL)shouldPlayFullscreenOnly;

@end
