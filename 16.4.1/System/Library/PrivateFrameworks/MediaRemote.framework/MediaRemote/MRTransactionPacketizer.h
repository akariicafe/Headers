@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject {
    NSMutableArray *_outgoingPackets;
    NSMutableDictionary *_incomingPackets;
}

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)packetize:(id)a0 packageSize:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)unpacketize:(id)a0 completion:(id /* block */)a1;

@end
