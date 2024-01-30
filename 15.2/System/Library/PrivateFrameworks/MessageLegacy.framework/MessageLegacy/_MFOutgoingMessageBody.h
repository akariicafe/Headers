@class NSString, MFBufferedDataConsumer, NSData;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer> {
    MFBufferedDataConsumer *_consumer;
    NSData *_rawData;
    unsigned long long _count;
    BOOL _lastNewLine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)done;
- (long long)appendData:(id)a0;
- (id)rawData;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;
- (id)data;
- (BOOL)isLastCharacterNewLine;

@end
