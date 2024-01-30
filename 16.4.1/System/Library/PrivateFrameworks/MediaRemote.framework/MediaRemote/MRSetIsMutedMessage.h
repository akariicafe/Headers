@class NSString;

@interface MRSetIsMutedMessage : MRProtocolMessage

@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)initWithIsMuted:(BOOL)a0 outputDeviceUID:(id)a1;

@end
