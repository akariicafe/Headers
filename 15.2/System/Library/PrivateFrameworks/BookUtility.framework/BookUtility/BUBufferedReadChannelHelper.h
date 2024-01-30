@class BUBufferedReadChannel, NSString;

@interface BUBufferedReadChannelHelper : NSObject <BUStreamReadChannel>

@property (weak, nonatomic) BUBufferedReadChannel *bufferedReadChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (id)init;
- (void)readWithHandler:(id /* block */)a0;
- (id)initWithBufferedReadChannel:(id)a0;

@end
