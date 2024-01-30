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

- (id)initWithURL:(id)a0;
- (id)initWithData:(id)a0;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)delegate;
- (unsigned long long)streamStatus;
- (BOOL)hasBytesAvailable;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)propertyForKey:(id)a0;
- (id)streamError;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void)open;
- (void)setDelegate:(id)a0;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)dealloc;
- (id)initWithFileAtPath:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)_SY_notifyOnQueue:(id)a0 handler:(id /* block */)a1;
- (void)_dispatchMyEvent:(unsigned long long)a0;
- (void)_handlePendingInput;
- (void)_postEventToDelegate:(unsigned long long)a0;
- (id)initWithCompressedDataStream:(id)a0;

@end
