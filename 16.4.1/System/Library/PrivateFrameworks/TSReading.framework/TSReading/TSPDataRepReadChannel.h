@class NSString, NSObject, SFUDataRepresentation;
@protocol SFUInputStream, OS_dispatch_queue;

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {
    SFUDataRepresentation *_representation;
    id<SFUInputStream> _inputStream;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (id)initWithRepresentation:(id)a0;
- (void).cxx_destruct;
- (void)readWithQueue:(id)a0 handler:(id /* block */)a1;

@end
