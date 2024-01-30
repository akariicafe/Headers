@class NSSet, NSDate;

@interface FigCaptureLogSmartCameraGating : NSObject {
    int _gateIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *_openingTimestamp;
    NSSet *_currentPresentations;
    int _numFrames;
    int _numTrackedRegions;
    int _numBoxesPresented;
    int _numEmptyFrames;
    int _numClosingFrames;
}

+ (void)initialize;

- (void)logGateOpened;
- (void)logTracksCreated:(int)a0;
- (void)logGateClosed;
- (id)initWithGateIdentifier:(int)a0;
- (void)dealloc;
- (void)logSmartCamIsConfident:(BOOL)a0 presentedIdentifiers:(id)a1 presentedCount:(int)a2;

@end
