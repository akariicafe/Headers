@interface MRGetIsMutedResultMessage : MRProtocolMessage

@property (readonly, nonatomic, getter=isMuted) BOOL muted;

- (unsigned long long)type;
- (id)initWithIsMuted:(BOOL)a0;

@end
