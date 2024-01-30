@interface PTHumanDetections : NSObject {
    struct PTHumanDetection { int groupId; void /* unknown type, empty encoding */ faceRect; void /* unknown type, empty encoding */ faceRectCenteredEma; void /* unknown type, empty encoding */ faceRectCenteredEmaEma; void /* unknown type, empty encoding */ headRotation; float faceConfidenceLevel; BOOL eyeConfidenceLevel[2]; void /* unknown type, empty encoding */ eyeRect[2]; float confidence; } _detectionsRaw[4];
    struct PTHumanDetection { int groupId; void /* unknown type, empty encoding */ faceRect; void /* unknown type, empty encoding */ faceRectCenteredEma; void /* unknown type, empty encoding */ faceRectCenteredEmaEma; void /* unknown type, empty encoding */ headRotation; float faceConfidenceLevel; BOOL eyeConfidenceLevel[2]; void /* unknown type, empty encoding */ eyeRect[2]; float confidence; } _detectionsFiltered[4];
}

@property (readonly) int count;
@property (readonly) struct PTHumanDetection { int x0; float x1; BOOL x2[2]; void /* unknown type, empty encoding */ x3[2]; float x4; } *detectionsRaw;
@property (readonly) struct PTHumanDetection { int x0; float x1; BOOL x2[2]; void /* unknown type, empty encoding */ x3[2]; float x4; } *detectionsFiltered;

- (void)filterDetections;
- (void)initFilterDetections;
- (void)unpactDetections:(id)a0;

@end
