@class NSString, NSProgress, NSURL, _SYStreamGuts;

@interface SYCompressedFileInputStream : NSInputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress> {
    NSURL *_url;
    struct gzFile_s { unsigned int x0; char *x1; long long x2; } *_file;
    _SYStreamGuts *_internal;
}

@property (readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
- (id)initWithData:(id)a0;
- (void)dealloc;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)initWithURL:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)initWithFileAtPath:(id)a0;
- (void)setDelegate:(id)a0;
- (void)open;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (unsigned long long)streamStatus;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)delegate;
- (BOOL)hasBytesAvailable;
- (void)_SY_notifyOnQueue:(id)a0 handler:(id /* block */)a1;
- (id)initWithCompressedFileAtURL:(id)a0;
- (void)_postEventToDelegate:(unsigned long long)a0;

@end
