@class DOCThumbnailDescriptor;

@interface DOCPlainFolderThumbnailRequest : DOCThumbnailRequest {
    DOCThumbnailDescriptor *_descriptor;
}

- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)a0;

@end
