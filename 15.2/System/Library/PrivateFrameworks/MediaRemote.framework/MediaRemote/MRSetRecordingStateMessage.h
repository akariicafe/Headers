@interface MRSetRecordingStateMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int state;

- (id)initWithRecordingState:(unsigned int)a0;
- (unsigned long long)type;

@end
