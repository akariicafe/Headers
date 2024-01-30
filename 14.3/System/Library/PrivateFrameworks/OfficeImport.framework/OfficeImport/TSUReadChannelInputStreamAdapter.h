@class NSString, NSObject;
@protocol TSUReadChannel, OS_dispatch_data;

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream> {
    id<TSUReadChannel> _readChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    long long _offset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)seekToOffset:(long long)a0;
- (void)dealloc;
- (long long)offset;
- (BOOL)canSeek;
- (id)initWithReadChannel:(id)a0;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;

@end
