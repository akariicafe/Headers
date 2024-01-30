@interface IMAttachmentBlastdoor : NSObject

+ (id)logger;
+ (BOOL)supportsFeature:(id)a0;
+ (void)generatePreview:(id)a0 maxPxWidth:(double)a1 scale:(double)a2 withCompletionBlock:(id /* block */)a3;
+ (void)generateAudioPreview:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (void)sendData:(id)a0 forPreviewType:(unsigned char)a1 withCompletionBlock:(id /* block */)a2;
+ (void)sendBalloonPluginPayloadData:(id)a0 withBundleIdentifier:(id)a1 completionBlock:(id /* block */)a2;
+ (void)generateNickname:(id)a0 forRecordID:(id)a1 withKey:(id)a2 completionBlock:(id /* block */)a3;
+ (void)generatePassPreview:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (void)getMetadataForAnimatedImage:(id)a0 maxCount:(long long)a1 withCompletionBlock:(id /* block */)a2;
+ (void)generateAnimatedImagePreview:(id)a0 maxPixelDimension:(double)a1 index:(long long)a2 maxCount:(long long)a3 withCompletionBlock:(id /* block */)a4;
+ (id)blastdoorInterface;
+ (void)generateMoviePreview:(id)a0 maxPxWidth:(double)a1 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3 withCompletionBlock:(id /* block */)a4;

@end
