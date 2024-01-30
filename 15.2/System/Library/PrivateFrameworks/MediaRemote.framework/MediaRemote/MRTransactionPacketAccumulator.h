@class NSMutableOrderedSet;

@interface MRTransactionPacketAccumulator : NSObject {
    NSMutableOrderedSet *_packets;
    unsigned long long _currentLength;
}

- (id)mergePacket:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
