@class CBUUID, NSOutputStream, NSInputStream, CBPeer;

@interface CBL2CAPChannel : NSObject

@property (retain, nonatomic) CBUUID *serviceUUID;
@property (nonatomic) BOOL isIncoming;
@property (readonly, nonatomic) int socketFD;
@property (readonly, nonatomic) CBPeer *peer;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) unsigned short PSM;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPeer:(id)a0 info:(id)a1;

@end
