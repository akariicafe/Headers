@class _MRLyricsEventProtobuf;

@interface MRSendLyricsEventMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRLyricsEventProtobuf *event;

- (unsigned long long)type;
- (id)initWithEvent:(id)a0;

@end
