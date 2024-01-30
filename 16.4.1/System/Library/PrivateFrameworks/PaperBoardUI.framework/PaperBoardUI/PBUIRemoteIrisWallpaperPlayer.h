@class NSString, NSURL, UIGestureRecognizer, UILongPressGestureRecognizer;
@protocol PBUIRemoteIrisWallpaperPlayerDelegate, PBUIIrisWallpaperPlayerDelegate;

@interface PBUIRemoteIrisWallpaperPlayer : NSObject <UIGestureRecognizerDelegate, PBUIIrisWallpaperPlaying> {
    UILongPressGestureRecognizer *_gestureRecognizer;
}

@property (nonatomic, getter=isTouchActive, setter=_setTouchActive:) BOOL touchActive;
@property (weak, nonatomic) id<PBUIRemoteIrisWallpaperPlayerDelegate> delegate;
@property (nonatomic, setter=_setIrisPlaybackState:) long long irisPlaybackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PBUIIrisWallpaperPlayerDelegate> irisDelegate;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, nonatomic) double stillTimeInVideo;
@property (readonly, nonatomic) UIGestureRecognizer *irisGestureRecognizer;
@property (readonly, copy, nonatomic) NSURL *videoFileURL;

- (id)init;
- (void).cxx_destruct;
- (void)_handleWallpaperGestureBegan;
- (void)_handleWallpaperGestureChanged;
- (void)_handleWallpaperGestureEnded;
- (void)_wallpaperGestureChanged:(id)a0;

@end
