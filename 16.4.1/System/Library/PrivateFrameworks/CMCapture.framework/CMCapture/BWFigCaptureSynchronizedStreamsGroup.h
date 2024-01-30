@class NSDictionary, NSArray, BWFigCaptureStream;

@interface BWFigCaptureSynchronizedStreamsGroup : NSObject {
    struct OpaqueFigCaptureSynchronizedStreamsGroup { } *_syncGroup;
    BOOL _invalidated;
    NSArray *_activeStreams;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _ktraceCodePrefix;
}

@property (readonly) NSDictionary *supportedProperties;
@property (readonly) NSArray *streams;
@property (readonly) BWFigCaptureStream *synchronizationMaster;
@property (readonly) BOOL stopSupported;

+ (void)initialize;

- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)activeStreams;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (int)setActiveStreams:(id)a0;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (int)setMasterStream:(id)a0 slaveConfigurationsByPortType:(id)a1;
- (void)dealloc;
- (int)stop;
- (id)initWithFigCaptureSynchronizedStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup { } *)a0 captureDevice:(id)a1;
- (void)invalidate;
- (int)setCameraControlsMasterStream:(id)a0;
- (struct OpaqueFigCaptureSynchronizedStreamsGroup { } *)figCaptureSynchronizedStreamsGroup;

@end
