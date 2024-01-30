@class NSString;

@interface LPYouTubePlayerViewFullScreenDelegate : NSObject <_WKFullscreenDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_webViewWillExitElementFullscreen:(id)a0;
- (void)_webViewDidExitElementFullscreen:(id)a0;

@end
