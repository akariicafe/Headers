@class NSOutputStream, CBClassicPeer, CBUUID, NSInputStream;

@interface CBRFCOMMChannel : NSObject

@property (readonly, nonatomic) int socketFD;
@property (readonly, nonatomic) CBClassicPeer *peer;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) CBUUID *serviceUUID;
@property (readonly, nonatomic) unsigned char channelID;
@property (readonly, nonatomic) unsigned short mtu;
@property (readonly, nonatomic) BOOL isIncoming;

- (id)initWithPeer:(id)a0 info:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
