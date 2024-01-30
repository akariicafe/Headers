@class QLThumbnailGenerationRequest, DOCThumbnailFolderIcon, QLThumbnailGenerator;

@interface DOCRegularItemThumbnailRequest : DOCThumbnailRequest {
    QLThumbnailGenerator *_thumbnailGenerator;
    QLThumbnailGenerationRequest *_thumbnailRequest;
    DOCThumbnailFolderIcon *_folderIcon;
    unsigned long long _style;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)a0;
- (id)initWithItem:(id)a0 descriptor:(id)a1 thumbnailGenerator:(id)a2;

@end
