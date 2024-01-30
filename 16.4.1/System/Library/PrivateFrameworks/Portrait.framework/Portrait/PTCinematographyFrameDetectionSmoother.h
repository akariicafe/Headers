@class PTCinematographyDetection, NSMutableArray, NSMutableDictionary;

@interface PTCinematographyFrameDetectionSmoother : NSObject

@property (retain) NSMutableArray *frames;
@property (retain) PTCinematographyDetection *lastKnownFocusDetection;
@property (retain) NSMutableDictionary *firstFocusSmootherByTrackNumber;
@property BOOL didEndFrames;
@property BOOL didCacheIsNextFrameAvailable;
@property BOOL isNextFrameAvailableCache;
@property (readonly) BOOL isNextFrameAtEnd;
@property (readonly) BOOL isNextFrameAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)addFrame:(id)a0;
- (id)nextFrame;
- (void)_reinit;
- (id)_activeTrackNumbers;
- (BOOL)_computeIsNextFrameAvailable;
- (void)_dropAllFocusSmoothersIfLeaked;
- (void)_endFocusSmoothersForTrackNumbers:(id)a0;
- (id)_focusSmootherForAppendingWithTrackIdentifier:(long long)a0;
- (id)_focusSmootherForReadingWithTrackIdentifier:(long long)a0;
- (void)_invalidateIsNextFrameAvailableCache;
- (id)_newFocusSmoother;
- (void)_skipToNextFocusSmootherWithTrackIdentifier:(long long)a0;
- (void)_updateFocusDetectionForFrame:(id)a0;
- (void)endFrames;

@end
