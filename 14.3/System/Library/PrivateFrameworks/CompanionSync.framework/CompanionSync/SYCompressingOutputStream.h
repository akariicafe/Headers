@class NSOutputStream, NSString, NSProgress, _SYStreamGuts, _SYZlibStreamInternal;

@interface SYCompressingOutputStream : NSOutputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress> {
    NSOutputStream *_stream;
    _SYZlibStreamInternal *_internal;
}

@property (readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long inputBufferSize;
@property (nonatomic) unsigned long long outputBufferSize;
@property (nonatomic) long long compressionLevel;
@property (copy, nonatomic) id /* block */ onOpenComplete;
@property (copy, nonatomic) id /* block */ onBytesAvailable;
@property (copy, nonatomic) id /* block */ onSpaceAvailable;
@property (copy, nonatomic) id /* block */ onEndOfFile;
@property (copy, nonatomic) id /* block */ onError;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly, nonatomic) unsigned long long bytesThroughput;
@property (retain, nonatomic) NSProgress *progress;

- (void)close;
- (id)streamError;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (id)propertyForKey:(id)a0;
- (id)initToMemory;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (void)open;
- (BOOL)hasSpaceAvailable;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (unsigned long long)streamStatus;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (void)_SY_notifyOnQueue:(id)a0 handler:(id /* block */)a1;
- (void)_dispatchMyEvent:(unsigned long long)a0;
- (int)_handlePendingInput;
- (void)_postEventToDelegate:(unsigned long long)a0;
- (id)initWithDestinationStream:(id)a0;

@end
