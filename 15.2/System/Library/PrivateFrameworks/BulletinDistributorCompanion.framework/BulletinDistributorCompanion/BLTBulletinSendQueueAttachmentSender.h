@class NSMutableArray;

@interface BLTBulletinSendQueueAttachmentSender : NSObject {
    NSMutableArray *_urls;
}

- (void).cxx_destruct;
- (id)init;
- (void)addAttachment:(id)a0 key:(id)a1;
- (BOOL)sendAttachmentsWithSender:(id)a0 timeout:(id)a1 completion:(id /* block */)a2;

@end
