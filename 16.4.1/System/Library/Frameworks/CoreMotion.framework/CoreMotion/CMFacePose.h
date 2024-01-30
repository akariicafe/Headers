@class NSString, NSArray;

@interface CMFacePose : NSObject

@property (nonatomic) double localMachtime;
@property (nonatomic) double globalMachtime;
@property (nonatomic) int failureCode;
@property (nonatomic) NSString *failureDescription;
@property (nonatomic) BOOL tooDark;
@property (nonatomic) BOOL sensorCovered;
@property (nonatomic) float confidence;
@property (nonatomic) void /* unknown type, empty encoding */ translation;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } rotation;
@property (nonatomic) void /* unknown type, empty encoding */ gaze;
@property (nonatomic) void /* unknown type, empty encoding */ leftEyePosition;
@property (nonatomic) void /* unknown type, empty encoding */ rightEyePosition;
@property (retain, nonatomic) NSArray *blendShapeWeights;
@property (nonatomic) double roll;

@end
