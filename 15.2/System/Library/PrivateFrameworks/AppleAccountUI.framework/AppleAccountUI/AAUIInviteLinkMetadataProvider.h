@class AAMessagesInviteContext;

@interface AAUIInviteLinkMetadataProvider : NSObject {
    AAMessagesInviteContext *_context;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)loadMetadataWithImage:(id)a0 completion:(id /* block */)a1;
- (id)_lpImageWithImage:(id)a0;
- (id)_defaultBackgroundImage;

@end
