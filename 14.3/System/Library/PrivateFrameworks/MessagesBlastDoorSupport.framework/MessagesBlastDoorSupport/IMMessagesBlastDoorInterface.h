@interface IMMessagesBlastDoorInterface : NSObject {
    void /* unknown type, empty encoding */ bd;
}

+ (BOOL)supportsFeature:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)generatePreviewforAttachmentWithfileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 resultHandler:(id /* block */)a3;
- (void)defuseData:(id)a0 forPreviewType:(unsigned char)a1 resultHandler:(id /* block */)a2;
- (void)generateMoviePreviewForAttachmentWithFileURL:(id)a0 maxPixelDimension:(float)a1 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a2 scale:(float)a3 resultHandler:(id /* block */)a4;
- (void)defuseBalloonPluginPayload:(id)a0 withIdentifier:(id)a1 resultHandler:(id /* block */)a2;
- (void)diffuseTopLevelDictionary:(id)a0 resultHandler:(id /* block */)a1;

@end
