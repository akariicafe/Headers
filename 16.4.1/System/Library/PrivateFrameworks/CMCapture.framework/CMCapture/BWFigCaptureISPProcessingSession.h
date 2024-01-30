@class NSDictionary, NSMutableDictionary;
@protocol BWFigCaptureISPProcessingSessionDelegate;

@interface BWFigCaptureISPProcessingSession : NSObject {
    struct OpaqueFigCaptureISPProcessingSession { } *_session;
    NSDictionary *_supportedProperties;
    NSMutableDictionary *_cachedProperties;
    id<BWFigCaptureISPProcessingSessionDelegate> _delegate;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) id<BWFigCaptureISPProcessingSessionDelegate> delegate;
@property (readonly) NSDictionary *supportedProperties;
@property (readonly) struct OpaqueFigCaptureISPProcessingSession { } *figCaptureISPProcessingSession;

+ (void)initialize;

- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (id)initWithFigCaptureISPProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { } *)a0;
- (int)prepareWithHandler:(id /* block */)a0;
- (int)flush;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (int)processBuffer:(struct __CVBuffer { } *)a0 refCon:(void *)a1 outputDescriptors:(struct { struct __CFString *x0; void *x1; } *)a2 numOutputDescriptors:(int)a3 parameters:(id)a4;
- (void)dealloc;
- (int)invalidate;

@end
