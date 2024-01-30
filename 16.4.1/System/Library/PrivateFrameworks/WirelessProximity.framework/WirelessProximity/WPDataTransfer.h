@class NSMutableData, NSUUID;

@interface WPDataTransfer : NSObject

@property (retain, nonatomic) NSMutableData *currentReceivedData;
@property (nonatomic) unsigned short currentDataSize;
@property (nonatomic) BOOL receivedFirstPacket;
@property (retain, nonatomic) NSUUID *peerUUID;

- (void).cxx_destruct;
- (BOOL)addNewData:(id)a0;
- (id)initDataTransferForPeer:(id)a0;
- (void)resetTransfer;

@end
