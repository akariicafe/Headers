@class NSString;
@protocol TSUReadChannel;

@interface TSUReadChannelToStreamReadChannelAdapter : NSObject <TSUReadChannel, TSUStreamReadChannel> {
    id<TSUReadChannel> _readChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)a0;
- (id)initWithReadChannel:(id)a0;
- (void)setLowWater:(unsigned long long)a0;
- (void)readWithQueue:(id)a0 handler:(id /* block */)a1;
- (void)readFromOffset:(long long)a0 length:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
