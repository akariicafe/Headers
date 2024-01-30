@class NSDictionary, NSArray, NSMutableArray;

@interface BWFigCaptureDevice : NSObject {
    struct OpaqueFigCaptureDevice { } *_device;
    NSDictionary *_streamsByPortType;
    NSMutableArray *_activeProcessingSessions;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _ktraceCodePrefix;
}

@property (readonly) NSDictionary *supportedProperties;
@property (readonly) NSArray *streams;
@property (readonly) NSArray *synchronizedStreamsGroups;
@property (readonly) BOOL invalidated;

+ (void)initialize;

- (int)unregisterForNotification:(struct __CFString { } *)a0 listener:(const void *)a1;
- (void)dealloc;
- (int)requestControlOfStreams:(id)a0;
- (void)processingSessionHasBeenInvalidated:(id)a0;
- (id)copyStreamsWithPortTypes:(id)a0 error:(int *)a1;
- (id)initWithFigCaptureDevice:(struct OpaqueFigCaptureDevice { } *)a0;
- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (void)resetSynchronizedStreamsGroups;
- (struct OpaqueFigCaptureDevice { } *)figCaptureDevice;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)copySynchronizedStreamsGroupForStreams:(id)a0 error:(int *)a1;
- (id)copyISPProcessingSessionWithType:(int)a0 error:(int *)a1;
- (int)registerForNotification:(struct __CFString { } *)a0 listener:(const void *)a1 callback:(void /* function */ *)a2;
- (int)relinquishControlOfStreams:(id)a0;
- (id)copyStreamWithPortType:(struct __CFString { } *)a0 error:(int *)a1;
- (void)invalidate;
- (int)setMultiCamConfigurationWithActiveUnsynchronizedStreams:(id)a0 activeSynchronizedStreamsGroups:(id)a1 cameraControlsPriority:(id)a2;

@end
