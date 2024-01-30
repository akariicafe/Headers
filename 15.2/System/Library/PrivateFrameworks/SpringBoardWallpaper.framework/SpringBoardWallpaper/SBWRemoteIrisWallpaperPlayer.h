@class NSString, UILongPressGestureRecognizer;
@protocol SBWRemoteIrisWallpaperPlayerDelegate, SBFIrisWallpaperPlayerDelegate;

@interface SBWRemoteIrisWallpaperPlayer : NSObject <UIGestureRecognizerDelegate, SBFIrisWallpaperPlaying> {
    UILongPressGestureRecognizer *_gestureRecognizer;
}

@property (nonatomic, getter=isTouchActive, setter=_setTouchActive:) BOOL touchActive;
@property (weak, nonatomic) id<SBWRemoteIrisWallpaperPlayerDelegate> delegate;
@property (nonatomic, setter=_setIrisPlaybackState:) long long irisPlaybackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBFIrisWallpaperPlayerDelegate> irisDelegate;
@property (readonly, nonatomic) BOOL isIrisInteracting;

- (id)irisGestureRecognizer;
- (void).cxx_destruct;
- (id)init;
- (void)_wallpaperGestureChanged:(id)a0;
- (void)_handleWallpaperGestureBegan;
- (void)_handleWallpaperGestureEnded;
- (void)_handleWallpaperGestureChanged;

@end
