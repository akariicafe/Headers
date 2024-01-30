@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject {
    NSMutableArray *_outgoingPackets;
    NSMutableDictionary *_incomingPackets;
}

- (void)packetize:(id)a0 packageSize:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)unpacketize:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEmpty;
- (void).cxx_destruct;

@end
