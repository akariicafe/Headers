@interface VCEmulatedPacket : NSObject {
    unsigned char _datagram[1500];
}

@property (readonly, nonatomic) unsigned int packetID;
@property (nonatomic) unsigned int size;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) double arrivalTime;
@property (nonatomic) double networkServiceTime;
@property (nonatomic) double departureTime;
@property (nonatomic) BOOL isLost;
@property (nonatomic) BOOL isDroppedByAQM;
@property (nonatomic) void *metaData;
@property (nonatomic) long long type;

- (id)initWithPacketID:(unsigned int)a0;
- (id)initWithPacketID:(unsigned int)a0 datagram:(char *)a1 datagramSize:(unsigned int)a2;

@end
