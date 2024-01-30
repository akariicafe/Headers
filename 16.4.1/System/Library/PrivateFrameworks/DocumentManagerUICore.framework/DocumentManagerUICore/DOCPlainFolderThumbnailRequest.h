@class DOCThumbnailDescriptor;

@interface DOCPlainFolderThumbnailRequest : DOCThumbnailRequest {
    DOCThumbnailDescriptor *_descriptor;
}

- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)a0;

@end
