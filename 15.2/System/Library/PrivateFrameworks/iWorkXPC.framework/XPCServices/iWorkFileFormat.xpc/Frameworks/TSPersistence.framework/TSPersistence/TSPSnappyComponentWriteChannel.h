@class NSString, NSObject;
@protocol OS_dispatch_queue, TSPComponentWriteChannel;

@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    NSObject<OS_dispatch_queue> *_writeQueue;
    char _uncompressedBuffer[65536];
    unsigned long long _uncompressedLength;
    id<TSPComponentWriteChannel> _writeChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeData:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (void)writeBlock;
- (id)initWithWriteChannel:(id)a0;

@end
