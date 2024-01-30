@interface _SFWebAppMediaCaptureStatusBarManager : SFMediaCaptureStatusBarManager

@property (class, readonly, nonatomic) _SFWebAppMediaCaptureStatusBarManager *sharedManager;

- (id)statusString;
- (unsigned long long)overrideStyleForAudioOnly:(BOOL)a0;

@end
