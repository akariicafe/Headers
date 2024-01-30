@interface AssetViewer.ThumbnailProvider : QLThumbnailProvider {
    void /* unknown type, empty encoding */ renderer;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)provideThumbnailForFileRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
