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
@property (nonatomic) unsigned int baudRate;
@property (nonatomic) unsigned char dataBits;
@property (nonatomic) unsigned char parity;
@property (nonatomic) unsigned char stopBits;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)configureChannelPortParams:(unsigned int)a0 dataBits:(unsigned char)a1 parity:(unsigned char)a2 stopBits:(unsigned char)a3;
- (id)initWithPeer:(id)a0 info:(id)a1;

@end
