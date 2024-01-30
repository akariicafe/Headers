@class NSNumber;

@interface BKFaceDetectStateInfo : NSObject

@property (nonatomic) BOOL faceDetected;
@property (nonatomic) BOOL tooCloseToCamera;
@property (nonatomic) BOOL tooFarFromCamera;
@property (nonatomic) BOOL multipleFaces;
@property (nonatomic) BOOL flare;
@property (nonatomic) BOOL occlusion;
@property (retain, nonatomic) NSNumber *pitch;
@property (retain, nonatomic) NSNumber *yaw;
@property (retain, nonatomic) NSNumber *roll;
@property (nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) BOOL partiallyOutOfView;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initFromDictionary:(id)a0;
- (id)initWithPresenceState:(BOOL)a0;
- (id)initWithPresenceState:(BOOL)a0 details:(id)a1;
- (id)initFromFaceInfo:(const struct { unsigned short x0; unsigned short x1; unsigned int x2; float x3; float x4; float x5; } *)a0;

@end
