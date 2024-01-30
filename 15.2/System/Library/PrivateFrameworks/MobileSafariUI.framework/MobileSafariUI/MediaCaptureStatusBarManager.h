@class TabDocument;

@interface MediaCaptureStatusBarManager : _SFMediaCaptureStatusBarManager

@property (readonly, nonatomic) TabDocument *recordingTabDocument;

- (void)activateApp;
- (void)tabDidBecomeActive:(id)a0;
- (void)browserControllerWillEnterForeground:(id)a0;
- (void)browserControllerWillExitTabView:(id)a0;
- (void)browserControllerWillEnterTabView:(id)a0;
- (id)statusFormatString;
- (void)browserControllerDidEnterBackground:(id)a0;

@end
