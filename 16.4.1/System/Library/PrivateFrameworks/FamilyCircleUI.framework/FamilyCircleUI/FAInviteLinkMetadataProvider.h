@class FAInviteContext;

@interface FAInviteLinkMetadataProvider : NSObject {
    FAInviteContext *_context;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)_defaultImage;
- (id)_imageNamed:(id)a0;
- (id)_colorForString:(id)a0;
- (id)_defaultIcon;
- (void)fetchImageFromURL:(id)a0 completion:(id /* block */)a1;
- (id)linkMetadataWithImage:(id)a0 icon:(id)a1;
- (void)loadImageWithURL:(id)a0 enableTextOverlay:(BOOL)a1 completion:(id /* block */)a2;
- (void)loadMetatadataWithCompletion:(id /* block */)a0;

@end
