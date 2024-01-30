@class MFActivityMonitor, MFProgressFilterDataConsumer;

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer> {
    unsigned long long _accumulatedLength;
    MFActivityMonitor *_monitor;
}

@property (retain, nonatomic) MFProgressFilterDataConsumer *progressFilter;
@property (nonatomic) unsigned long long expectedLength;
@property (readonly) BOOL dataWasBase64;
@property (readonly) BOOL fetchSucceeded;

- (void).cxx_destruct;
- (void)attachmentFetchCompletedWithStatus:(long long)a0 forAttachmentNamed:(id)a1 ofMessageWithServerID:(id)a2 dataWasBase64:(BOOL)a3 sentBytesCount:(unsigned long long)a4 receivedBytesCount:(unsigned long long)a5;
- (void)consumeData:(id)a0 ofContentType:(id)a1 forAttachmentNamed:(id)a2 ofMessageWithServerID:(id)a3;
- (id)initWithActivityMonitor:(id)a0;

@end
