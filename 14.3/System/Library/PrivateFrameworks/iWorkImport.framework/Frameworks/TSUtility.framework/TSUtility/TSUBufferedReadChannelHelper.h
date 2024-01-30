@class NSString, TSUBufferedReadChannel;

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel> {
    TSUBufferedReadChannel *_bufferedReadChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)readWithHandler:(id /* block */)a0;
- (id)initWithBufferedReadChannel:(id)a0;
- (void)readWithHandlerAndWait:(id /* block */)a0;

@end
