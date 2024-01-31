@class CNDetection;

@interface CNFixedDetectionTrack : CNDetectionTrack

@property (readonly) float focusDisparity;
@property (readonly) CNDetection *originalDetection;

- (id)_internalFixedTrack;
- (id)initWithFocusDisparity:(float)a0;
- (id)initWithOriginalDetection:(id)a0;

@end
