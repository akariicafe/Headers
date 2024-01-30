@class NSString, NSDictionary, NSMutableDictionary;
@protocol BWFigCaptureStreamStartStopDelegate;

@interface BWFigCaptureStream : NSObject {
    struct OpaqueFigCaptureStream { } *_stream;
    NSString *_portTypeShortString;
    NSMutableDictionary *_cachedProperties;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _streaming;
    unsigned int _ktraceCodePrefix;
}

@property (readonly) NSString *portType;
@property (readonly) NSString *uniqueID;
@property (readonly) NSDictionary *supportedProperties;
@property (nonatomic) id<BWFigCaptureStreamStartStopDelegate> startStopDelegate;
@property (readonly, getter=isStreaming) BOOL streaming;

+ (void)initialize;

- (int)unregisterForNotification:(struct __CFString { } *)a0 listener:(const void *)a1;
- (struct OpaqueFigCaptureStream { } *)figCaptureStream;
- (int)sendCommandProperty:(struct __CFString { } *)a0;
- (int)addAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1;
- (void)dealloc;
- (int)stop;
- (id)_copyProperty:(struct __CFString { } *)a0 requireSupported:(BOOL)a1 error:(int *)a2;
- (id)getPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (id)initWithFigCaptureStream:(struct OpaqueFigCaptureStream { } *)a0;
- (id)description;
- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (int)setPropertyIfSupported:(struct __CFString { } *)a0 value:(id)a1;
- (void)flushPropertyCache;
- (int)start;
- (void)synchronizedStreamsGroupDidStop;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (int)registerForNotification:(struct __CFString { } *)a0 listener:(const void *)a1 callback:(void /* function */ *)a2;
- (void)synchronizedStreamsGroupWillStop;
- (id)copyPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (int)_setProperty:(struct __CFString { } *)a0 value:(id)a1 requireSupportedProperty:(BOOL)a2;
- (void)invalidate;

@end
