@class NSArray, MRPlayerPath, NSMutableArray;

@interface MRTransactionMessage : MRProtocolMessage {
    NSMutableArray *_packets;
}

@property (readonly, nonatomic) unsigned long long name;
@property (readonly, nonatomic) NSArray *packets;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithContentItems:(id)a0 forPlayerPath:(id)a1;
- (id)initWithName:(unsigned long long)a0 packets:(id)a1 playerPath:(id)a2;
- (id)initWithPlaybackQueue:(id)a0 forPlayerPath:(id)a1;

@end
