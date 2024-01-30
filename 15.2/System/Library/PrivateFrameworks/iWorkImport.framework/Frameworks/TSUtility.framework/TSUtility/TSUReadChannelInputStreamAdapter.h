@class NSString, NSObject;
@protocol TSUReadChannel, OS_dispatch_data;

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream> {
    id<TSUReadChannel> _readChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    long long _offset;
    unsigned long long _length;
    BOOL _closeChannelOnClose;
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
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (id)initWithReadChannel:(id)a0 length:(unsigned long long)a1;
- (id)initWithReadChannel:(id)a0 length:(unsigned long long)a1 closeChannelOnClose:(BOOL)a2;

@end
