@class NSArray, MRPlayerPath, NSMutableArray;

@interface MRTransactionMessage : MRProtocolMessage {
    NSMutableArray *_packets;
}

@property (readonly, nonatomic) unsigned long long name;
@property (readonly, nonatomic) NSArray *packets;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)initWithContentItems:(id)a0 forPlayerPath:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithName:(unsigned long long)a0 packets:(id)a1 playerPath:(id)a2;
- (id)initWithPlaybackQueue:(id)a0 forPlayerPath:(id)a1;

@end
