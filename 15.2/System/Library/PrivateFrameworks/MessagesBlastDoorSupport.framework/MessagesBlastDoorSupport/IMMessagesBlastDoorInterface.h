@interface IMMessagesBlastDoorInterface : NSObject {
    void /* unknown type, empty encoding */ bd;
}

+ (BOOL)supportsFeature:(id)a0;

- (void)generatePreviewforAttachmentWithfileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 resultHandler:(id /* block */)a3;
- (void)defuseData:(id)a0 forPreviewType:(unsigned char)a1 resultHandler:(id /* block */)a2;
- (void)generateMoviePreviewForAttachmentWithFileURL:(id)a0 maxPixelDimension:(float)a1 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a2 scale:(float)a3 resultHandler:(id /* block */)a4;
- (void)defuseBalloonPluginPayload:(id)a0 withIdentifier:(id)a1 resultHandler:(id /* block */)a2;
- (void)generatePreviewforAudioMessageWithfileURL:(id)a0 resultHandler:(id /* block */)a1;
- (void)defuseNicknameDictionary:(id)a0 withKey:(id)a1 recordTag:(id)a2 resultHandler:(id /* block */)a3;
- (void)getMetadataforAnimatedImageWithfileURL:(id)a0 maxCount:(long long)a1 resultHandler:(id /* block */)a2;
- (void)generatePreviewforAnimatedImageWithfileURL:(id)a0 maxPixelDimension:(float)a1 index:(long long)a2 maxCount:(long long)a3 resultHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)diffuseTopLevelDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (void)defuseSMSDictionary:(id)a0 resultHandler:(id /* block */)a1;
- (void)generateMetadataforAttachmentWithfileURL:(id)a0 resultHandler:(id /* block */)a1;
- (void)generatePreviewforAttachmentWithfileURL:(id)a0 resultHandler:(id /* block */)a1;
- (void)generatePreviewforAudioMessageWithfileURL:(id)a0 powerLevelsCount:(unsigned long long)a1 resultHandler:(id /* block */)a2;

@end
