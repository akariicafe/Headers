@class DTXResourceTracker, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface DTXTransport : NSObject {
    NSObject<OS_dispatch_queue> *_serializer;
    NSObject<OS_dispatch_queue> *_handlerGuard;
    id /* block */ _dataReceivedHandler;
    BOOL _resumed;
}

@property (readonly, nonatomic) DTXResourceTracker *resourceTracker;
@property unsigned int status;
@property (copy, nonatomic) id /* block */ dataReceivedHandler;
@property (readonly) NSArray *localAddresses;

+ (id)schemes;
+ (BOOL)recognizesURL:(id)a0;

- (void)disconnect;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRemoteAddress:(id)a0;
- (id)initWithXPCRepresentation:(id)a0;
- (id)permittedBlockCompressionTypes;
- (void)received:(const char *)a0 ofLength:(unsigned long long)a1 destructor:(id /* block */)a2;
- (void)serializedDisconnect:(id /* block */)a0;
- (id)serializedXPCRepresentation;
- (unsigned int)supportedDirections;
- (unsigned long long)transmit:(const void *)a0 ofLength:(unsigned long long)a1;

@end
