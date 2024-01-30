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
@property (retain, nonatomic) NSNumber *distance;
@property (nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) NSNumber *frameNumber;
@property (readonly, nonatomic) BOOL partiallyOutOfView;
@property (readonly, nonatomic) BOOL unsupportedGlasses;
@property (readonly, nonatomic) BOOL glassesMismatch;

- (id)initFromDictionary:(id)a0;
- (id)dictionary;
- (void).cxx_destruct;
- (id)initFromFaceInfo:(const struct { unsigned char x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; float x6; float x7; float x8; unsigned int x9; } *)a0;
- (id)initWithPresenceState:(BOOL)a0;
- (id)initWithPresenceState:(BOOL)a0 details:(id)a1;

@end
