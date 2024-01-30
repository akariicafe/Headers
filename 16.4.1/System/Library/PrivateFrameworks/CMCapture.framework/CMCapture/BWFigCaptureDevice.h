@class NSArray, NSDictionary, NSString, NSMutableArray;

@interface BWFigCaptureDevice : NSObject <BWFigCaptureISPProcessingSessionDelegate> {
    struct OpaqueFigCaptureDevice { } *_device;
    NSDictionary *_streamsByPortType;
    NSMutableArray *_activeProcessingSessions;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _ktraceCodePrefix;
}

@property (readonly) struct OpaqueFigCaptureDevice { } *figCaptureDevice;
@property (readonly) NSDictionary *supportedProperties;
@property (readonly) NSArray *streams;
@property (readonly) NSArray *synchronizedStreamsGroups;
@property (readonly) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (int)relinquishControlOfStreams:(id)a0;
- (void)processingSessionHasBeenInvalidated:(id)a0;
- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)initWithFigCaptureDevice:(struct OpaqueFigCaptureDevice { } *)a0;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (id)copySynchronizedStreamsGroupForStreams:(id)a0 error:(int *)a1;
- (int)unregisterForNotification:(struct __CFString { } *)a0 listener:(const void *)a1;
- (int)registerForNotification:(struct __CFString { } *)a0 listener:(const void *)a1 callback:(void /* function */ *)a2;
- (int)requestControlOfStreams:(id)a0;
- (id)copyPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (void)dealloc;
- (id)copySyncGroupForFigCaptureSynchronizedStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup { } *)a0 error:(int *)a1;
- (id)copyISPProcessingSessionWithType:(int)a0 error:(int *)a1;
- (id)copyStreamWithPortType:(struct __CFString { } *)a0 error:(int *)a1;
- (int)setPropertyIfSupported:(struct __CFString { } *)a0 value:(id)a1;
- (id)getPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (void)invalidate;
- (void)resetSynchronizedStreamsGroups;
- (id)copyStreamForFigCaptureStream:(struct OpaqueFigCaptureStream { } *)a0 error:(int *)a1;
- (id)copyStreamsWithPortTypes:(id)a0 error:(int *)a1;

@end
