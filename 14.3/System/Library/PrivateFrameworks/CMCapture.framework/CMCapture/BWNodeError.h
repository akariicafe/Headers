@class FigCaptureRecordingSettings, NSString, BWStillImageCaptureSettings, FigCaptureStillImageSettings;

@interface BWNodeError : NSObject {
    long long _uniqueID;
    int _errorCode;
    NSString *_sourceNodeDescription;
    FigCaptureStillImageSettings *_requestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_resolvedStillImageCaptureSettings;
}

@property (readonly) int errorCode;
@property (readonly) NSString *sourceNodeDescription;
@property (readonly) FigCaptureStillImageSettings *requestedStillImageCaptureSettings;
@property (readonly) BWStillImageCaptureSettings *resolvedStillImageCaptureSettings;
@property (readonly) FigCaptureRecordingSettings *recordingSettings;

+ (id)newError:(int)a0 sourceNode:(id)a1 recordingSettings:(id)a2;
+ (id)newError:(int)a0 sourceNode:(id)a1 requestedStillImageCaptureSettings:(id)a2 resolvedStillImageCaptureSettings:(id)a3;
+ (id)newError:(int)a0 sourceNode:(id)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (id)_initWithError:(int)a0 sourceNode:(id)a1 requestedStillImageCaptureSettings:(id)a2 resolvedStillImageCaptureSettings:(id)a3 recordingSettings:(id)a4;

@end
