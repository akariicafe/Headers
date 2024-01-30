@class NSString, NSMutableDictionary;
@protocol UINavigationControllerDelegate, UIVideoEditorControllerDelegate;

@interface UIVideoEditorController : UINavigationController {
    int _previousStatusBarStyle;
    NSMutableDictionary *_properties;
    struct { unsigned char visible : 1; unsigned char isCleaningUp : 1; unsigned char didRevertStatusBar : 1; } _flags;
}

@property (nonatomic) id<UINavigationControllerDelegate, UIVideoEditorControllerDelegate> delegate;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) long long videoQuality;

+ (BOOL)canEditVideoAtPath:(id)a0;

- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setValue:(id)a0 forProperty:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setProperties:(id)a0;
- (void)_autoDismiss;
- (id)_createInitialController;
- (BOOL)_didRevertStatusBar;
- (void)_initializeProperties;
- (BOOL)_isSupportedInterfaceOrientation:(long long)a0;
- (id)_properties;
- (void)_removeAllChildren;
- (void)_setVideoURL:(id)a0;
- (void)_setupControllers;
- (id)_valueForProperty:(id)a0;
- (id)_videoURL;
- (void)editVideoViewController:(id)a0 didFailWithError:(id)a1;
- (void)editVideoViewController:(id)a0 didTrimVideoWithOptions:(id)a1;
- (void)editVideoViewControllerDidCancel:(id)a0;
- (void)viewWillUnload;

@end
