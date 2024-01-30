@class AVTUICapabilities, NSArray, AVTViewSessionProvider, UIColor, AVTStickerViewController, AVTUIEnvironment, NSString;
@protocol AVTPresenterDelegate, AVTStickerViewControllerImageDelegate, AVTStickerSelectionDelegate, AVTGrayscaleStickerControllerDelegate;

@interface AVTGrayscaleStickerController : NSObject <AVTPoseCaptureViewControllerDelegate, AVTStickerSheetDelegate, AVTStickerSheetControllerProvider>

@property (weak, nonatomic) id<AVTStickerViewControllerImageDelegate> imageDelegate;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id<AVTStickerSelectionDelegate> selectionDelegate;
@property (weak, nonatomic) AVTStickerViewController *stickerViewController;
@property (retain, nonatomic) AVTViewSessionProvider *viewSessionProvider;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (retain, nonatomic) AVTUICapabilities *uiCapabilities;
@property (nonatomic) BOOL allowsPoseCapture;
@property (nonatomic) BOOL shouldHideUserInfoView;
@property (retain, nonatomic) NSArray *allowedStickers;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic, getter=shouldShowSelectionLayerForStickers) BOOL showsSelectionLayerForStickers;
@property (nonatomic) BOOL accessibilityIgnoresInvertColors;
@property (weak, nonatomic) id<AVTGrayscaleStickerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)poseCaptureViewController:(id)a0 didCapturePoseWithConfiguration:(id)a1 avatar:(id)a2;
- (void)poseCaptureViewController:(id)a0 willCaptureAvatarImage:(id)a1 completion:(id /* block */)a2;
- (void)poseCaptureViewControllerDidCancel:(id)a0;
- (void)stickerSheetController:(id)a0 didSelectCameraViewForRecord:(id)a1;
- (id)stickerSheetControllerForSelectedAvatar:(id)a0 stickerSheetModel:(id)a1 taskScheduler:(id)a2;
- (id)stickerViewControllerForFetchRequest:(id)a0 allowedStickers:(id)a1 stickerPacks:(id)a2 allowPoseCapture:(BOOL)a3 showUserInfoView:(BOOL)a4 allowEditing:(BOOL)a5 backgroundColor:(id)a6 grayscaleConvertionDelegate:(id)a7 presenterDelegate:(id)a8 selectionDelegate:(id)a9;
- (void)wrapAndPresentViewController:(id)a0 animated:(BOOL)a1;

@end
