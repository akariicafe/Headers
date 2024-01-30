@class NSMutableOrderedSet;

@interface MRTransactionPacketAccumulator : NSObject {
    NSMutableOrderedSet *_packets;
    unsigned long long _currentLength;
}

- (id)init;
- (void).cxx_destruct;
- (id)mergePacket:(id)a0;

@end
