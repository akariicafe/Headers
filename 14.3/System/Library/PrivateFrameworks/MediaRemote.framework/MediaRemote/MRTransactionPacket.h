@class NSString, _MRTransactionKeyProtobuf, _MRTransactionPacketProtobuf, NSMutableData;

@interface MRTransactionPacket : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) _MRTransactionKeyProtobuf *key;
@property (readonly, nonatomic) _MRTransactionPacketProtobuf *protobuf;
@property (nonatomic) unsigned long long writeLength;
@property (readonly, nonatomic) unsigned long long writePosition;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long actualLength;
@property (readonly, nonatomic) unsigned long long totalLength;
@property (readonly, nonatomic) unsigned long long totalWritePosition;
@property (readonly, nonatomic, getter=isReadComplete) BOOL readComplete;
@property (readonly, nonatomic, getter=isWriteComplete) BOOL writeComplete;

- (id)initWithData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isComplete;
- (id)initWithProtobuf:(id)a0;
- (id)initWithPackets:(id)a0;
- (void)writeComplete;

@end
