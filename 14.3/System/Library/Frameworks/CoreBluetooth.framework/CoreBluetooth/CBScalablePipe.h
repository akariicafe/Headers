@class NSOutputStream, NSString, CBScalablePipeManager, CBCentral, NSInputStream, CBPeer;

@interface CBScalablePipe : NSObject {
    CBScalablePipeManager *_pipeManager;
    int _socket;
}

@property (readonly, nonatomic) CBCentral *central;
@property (readonly, nonatomic) CBPeer *peer;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) BOOL reliablePipe;
@property (readonly, nonatomic) NSInputStream *input;
@property (readonly, nonatomic) NSOutputStream *output;
@property (readonly, nonatomic) void *channel;
@property (readonly, nonatomic) unsigned char localCLVersion;
@property (readonly, nonatomic) unsigned char peerCLVersion;
@property (readonly, nonatomic) unsigned int localCLFeatures;
@property (readonly, nonatomic) unsigned int peerCLFeatures;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPipeManager:(id)a0 info:(id)a1;
- (id)description;
- (void)setOrphan;

@end
