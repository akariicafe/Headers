@class NSData, ASTrafficLogger;

@interface DAConvertCRtoCRLFStream : NSInputStream {
    NSData *_mimeData;
    NSData *_preflightData;
    NSData *_postflightData;
    unsigned long long _totalLength;
    unsigned long long _readOffset;
    BOOL _lastByteCopiedWasCR;
    BOOL _openEventSent;
    unsigned long long _streamStatus;
    BOOL _intendToStream;
    id _delegate;
    struct __CFRunLoopSource { } *_rls;
    void /* function */ *_clientCallback;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } _clientContext;
    ASTrafficLogger *_trafficLogger;
}

- (void)close;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
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
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (unsigned long long)streamStatus;
- (void)dealloc;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (id)initWithMIMEData:(id)a0 preflightData:(id)a1 postflightData:(id)a2 intendToStream:(BOOL)a3;

@end
