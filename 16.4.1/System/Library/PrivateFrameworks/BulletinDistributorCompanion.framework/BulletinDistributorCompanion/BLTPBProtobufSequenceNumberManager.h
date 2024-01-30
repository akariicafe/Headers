@class BLTCircularBitBuffer, NSString, NSUUID, NSURL, NSLock;

@interface BLTPBProtobufSequenceNumberManager : NSObject {
    unsigned long long _sendSequenceNumber;
    unsigned long long _recvSequenceNumber;
    NSLock *_sequenceNumberAccess;
    BLTCircularBitBuffer *_duplicateEntries;
    NSURL *_sequenceNumbersURL;
    BOOL _updateSequenceNumbersOnOutOfOrder;
}

@property (nonatomic) unsigned long long sessionState;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUUID *currentSessionIdentifier;
@property (readonly, nonatomic) NSUUID *recvSessionIdentifier;

- (void).cxx_destruct;
- (BOOL)_isSequenceNumberInOrder:(unsigned long long)a0;
- (void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(unsigned long long)a0;
- (id)_sequenceNumbersURL;
- (BOOL)_writeSequenceNumbersToStore;
- (id)initWithServiceName:(id)a0 updateSequenceNumbersOnOutOfOrder:(BOOL)a1;
- (id)initWithServiceName:(id)a0 updateSequenceNumbersOnOutOfOrder:(BOOL)a1 duplicateCapacity:(unsigned long long)a2;
- (id)nextSendSequenceNumber;
- (long long)setRecvSequenceNumber:(unsigned long long)a0 recvSessionIdentifier:(id)a1 force:(BOOL)a2;

@end
