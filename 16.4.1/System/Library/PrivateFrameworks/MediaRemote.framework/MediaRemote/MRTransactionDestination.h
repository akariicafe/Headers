@class MRPlayerPath, MRTransactionPacketizer, NSObject;
@protocol OS_dispatch_queue;

@interface MRTransactionDestination : NSObject {
    MRTransactionPacketizer *_packetizer;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) unsigned long long name;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (void).cxx_destruct;
- (id)initWithName:(unsigned long long)a0 playerPath:(id)a1;
- (void)packetsFromMessage:(id)a0 completion:(id /* block */)a1;
- (void)unpacketize:(id)a0 completion:(id /* block */)a1;

@end
