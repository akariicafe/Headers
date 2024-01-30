@class NSString, NSObject;
@protocol OS_dispatch_data, BUReadChannel;

@interface BUReadChannelInputStreamAdapter : NSObject <BUInputStream>

@property (retain, nonatomic) id<BUReadChannel> readChannel;
@property (retain, nonatomic) NSObject<OS_dispatch_data> *leftoverData;
@property (nonatomic) long long offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)seekToOffset:(long long)a0;
- (void)dealloc;
- (void)close;
- (BOOL)canSeek;
- (void).cxx_destruct;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithReadChannel:(id)a0;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;

@end
