@class NSString, NSProgress, _SYStreamGuts, NSInputStream, _SYZlibStreamInternal;

@interface SYDecompressingInputStream : NSInputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress> {
    NSInputStream *_stream;
    _SYZlibStreamInternal *_internal;
}

@property (readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long inputBufferSize;
@property (nonatomic) unsigned long long outputBufferSize;
@property (copy, nonatomic) id /* block */ onOpenComplete;
@property (copy, nonatomic) id /* block */ onBytesAvailable;
@property (copy, nonatomic) id /* block */ onSpaceAvailable;
@property (copy, nonatomic) id /* block */ onEndOfFile;
@property (copy, nonatomic) id /* block */ onError;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly, nonatomic) unsigned long long bytesThroughput;
@property (retain, nonatomic) NSProgress *progress;

- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)close;
- (id)initWithURL:(id)a0;
- (id)initWithFileAtPath:(id)a0;
- (void)open;
- (id)initWithData:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (void).cxx_destruct;
- (id)delegate;
- (id)streamError;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)streamStatus;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)propertyForKey:(id)a0;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void)_SY_notifyOnQueue:(id)a0 handler:(id /* block */)a1;
- (id)initWithCompressedDataStream:(id)a0;
- (void)_dispatchMyEvent:(unsigned long long)a0;
- (void)_handlePendingInput;
- (void)_postEventToDelegate:(unsigned long long)a0;

@end
