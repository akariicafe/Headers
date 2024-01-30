@class NSString, TSPPasteboard, NSObject;
@protocol OS_dispatch_queue;

@interface TSPPasteboardReadChannel : NSObject <TSUStreamReadChannel> {
    NSObject<OS_dispatch_queue> *_readQueue;
    TSPPasteboard *_pasteboard;
    NSString *_pasteboardType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)_close;
- (void).cxx_destruct;
- (id)init;
- (void)readWithHandler:(id /* block */)a0;
- (void)readWithHandlerAndWait:(id /* block */)a0;
- (id)initWithPasteboard:(id)a0 pasteboardType:(id)a1;

@end
