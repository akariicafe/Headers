@class NSMutableDictionary;

@interface VCDatagramChannelManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
    unsigned int _nextToken;
    NSMutableDictionary *_datagramChannels;
    NSMutableDictionary *_destinations;
}

@property (copy) id /* block */ readHandler;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)setupDatagramChannel:(id)a0 eventHandler:(id /* block */)a1 error:(id *)a2;
- (void)removeDatagramChannel:(id)a0;
- (id)setupEmulatedDatagramChannelWithDestination:(id)a0 datagramChannel:(id)a1;
- (id)addDatagramChannelWithDescriptor:(int)a0 eventHandler:(id /* block */)a1 error:(id *)a2;
- (id)addDatagramChannelWithDestination:(id)a0 eventHandler:(id /* block */)a1 error:(id *)a2;
- (id)datagramChannelWithChannelToken:(unsigned int)a0;
- (void)executeBlockForIDSDestination:(id)a0 blockToExecute:(id /* block */)a1;

@end
