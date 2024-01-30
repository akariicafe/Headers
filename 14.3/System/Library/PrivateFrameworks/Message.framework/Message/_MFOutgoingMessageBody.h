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

- (id)rawData;
- (id)init;
- (BOOL)isLastCharacterNewLine;
- (void).cxx_destruct;
- (id)data;
- (long long)appendData:(id)a0;
- (unsigned long long)count;
- (void)done;

@end
