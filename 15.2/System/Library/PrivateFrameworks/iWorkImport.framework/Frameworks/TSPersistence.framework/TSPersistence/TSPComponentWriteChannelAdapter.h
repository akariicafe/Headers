@class NSString, TSUFileIOChannel, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {
    NSObject<OS_dispatch_queue> *_queue;
    TSUFileIOChannel *_channel;
    id /* block */ _handler;
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeData:(id)a0;
- (void)close;
- (void)_close;
- (void)setError:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0 handler:(id /* block */)a1;

@end
