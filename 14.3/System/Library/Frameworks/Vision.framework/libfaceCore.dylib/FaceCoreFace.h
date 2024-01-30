@class NSData, NSDictionary;

@interface FaceCoreFace : NSObject

@property struct { struct CGPoint { double x; double y; } center; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; } face;
@property struct { struct CGPoint { double x; double y; } center; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; } leftEye;
@property struct { struct CGPoint { double x; double y; } center; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; } rightEye;
@property struct { struct CGPoint { double x; double y; } center; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; } mouth;
@property double faceSize;
@property double faceAngle;
@property long long trackID;
@property unsigned long long trackDuration;
@property (retain) NSData *faceprint;
@property int faceType;
@property (retain) NSDictionary *faceLandmarkPoints;
@property (retain) NSDictionary *expressionFeatures;
@property (retain) NSDictionary *additionalInfo;
@property (readonly) BOOL hasLeftEyeBounds;
@property (readonly) BOOL hasRightEyeBounds;
@property (readonly) BOOL hasMouthBounds;

- (void).cxx_destruct;
- (void)dealloc;

@end
