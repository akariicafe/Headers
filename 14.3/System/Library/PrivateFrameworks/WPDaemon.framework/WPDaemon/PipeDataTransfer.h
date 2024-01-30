@class NSUUID, NSData, NSMutableData;

@interface PipeDataTransfer : NSObject

@property (retain) NSUUID *peerUUID;
@property unsigned char txSeqNum;
@property unsigned short txTotalLenToSend;
@property (retain) NSData *txTotalDataToSend;
@property (retain) NSData *txData;
@property unsigned long long txDataLeftToSend;
@property unsigned char rxSeqNum;
@property BOOL rxFirstPacket;
@property unsigned short rxTotalLenToReceive;
@property (retain) NSData *rxTotalDataToReceive;
@property (retain) NSData *rxData;
@property unsigned short rxCurrentDataSize;
@property (retain) NSMutableData *rxCurrentReceivedData;
@property (retain) NSMutableData *rxTotalDataWithLen;
@property BOOL rxWaitForMoreData;

- (void).cxx_destruct;
- (id)description;
- (void)resetRxTransfer;
- (void)resetTxTransfer;
- (id)initPipeDataTransferForPeer:(id)a0;
- (void)resetAllTransfer;
- (unsigned char)generateSequenceNumber;

@end
