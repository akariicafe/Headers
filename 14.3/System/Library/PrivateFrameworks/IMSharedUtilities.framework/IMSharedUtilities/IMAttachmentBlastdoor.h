@interface IMAttachmentBlastdoor : NSObject

+ (id)blastdoorInterface;
+ (void)generateMoviePreview:(id)a0 maxPxWidth:(double)a1 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3 withCompletionBlock:(id /* block */)a4;
+ (void)generatePreview:(id)a0 maxPxWidth:(double)a1 scale:(double)a2 withCompletionBlock:(id /* block */)a3;
+ (void)sendData:(id)a0 forPreviewType:(unsigned char)a1 withCompletionBlock:(id /* block */)a2;
+ (void)sendBalloonPluginPayloadData:(id)a0 withBundleIdentifier:(id)a1 completionBlock:(id /* block */)a2;
+ (id)logger;
+ (BOOL)supportsFeature:(id)a0;

@end
