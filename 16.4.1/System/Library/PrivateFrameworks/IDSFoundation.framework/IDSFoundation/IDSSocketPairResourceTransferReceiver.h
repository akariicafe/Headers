@class NSString, NSDictionary, NSData, NSDate;

@interface IDSSocketPairResourceTransferReceiver : NSObject <IDSSocketPairMessage> {
    NSString *_resourcePath;
    NSDictionary *_metadata;
    int _fileDescriptor;
    unsigned long long _totalBytesExpected;
    BOOL _done;
    BOOL _isResuming;
    BOOL _resumeResourceTransfers;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressed;
    NSString *_peerResponseIdentifier;
}

@property (readonly, nonatomic) unsigned long long totalBytesReceived;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL wantsAppAck;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;

+ (id)incomingFilePathForMessageUUID:(id)a0;
+ (id)incomingFilePath;
+ (id)modernIncomingFilePath;

- (void)dealloc;
- (void).cxx_destruct;
- (void)abortTransfer;
- (BOOL)appendMessage:(id)a0 receiverError:(unsigned char *)a1;
- (id)finalizedMessageDictionaryIfDone;
- (id)initWithMessage:(id)a0 resumeResourceTransfers:(BOOL)a1 receiverError:(unsigned char *)a2;
- (BOOL)writeResourceData:(id)a0;
- (BOOL)writeResourceData:(id)a0 resourceByteOffset:(unsigned long long)a1;

@end
