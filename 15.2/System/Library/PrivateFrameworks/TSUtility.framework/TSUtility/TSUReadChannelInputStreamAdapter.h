@class NSString, NSObject;
@protocol OS_dispatch_data, TSUStreamReadChannel, TSUReadChannel, OS_dispatch_queue;

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream> {
    id<TSUReadChannel> _readChannel;
    id<TSUStreamReadChannel> _streamReadChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    NSObject<OS_dispatch_queue> *_readQueue;
    long long _offset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)a0;
- (void).cxx_destruct;
- (long long)offset;
- (void)dealloc;
- (id)initWithReadChannel:(id)a0;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (id)_initWithReadChannel:(id)a0 streamReadChannel:(id)a1;
- (id)initWithStreamReadChannel:(id)a0;

@end
