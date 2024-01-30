@class NSArray, NSString, NSData, NSURL, NSNumber;

@interface CIDVRGBCaptureUIResult : NSObject

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSNumber *livenessLabel;
@property (retain, nonatomic) NSArray *gestureSequence;
@property (retain, nonatomic) NSArray *assessmentsFAC;
@property (retain, nonatomic) NSArray *timestampsFAC;
@property (retain, nonatomic) NSNumber *assessmentFAC;
@property (retain, nonatomic) NSArray *assessmentsTA;
@property (retain, nonatomic) NSNumber *assessmentTA;
@property (retain, nonatomic) NSNumber *maxNccLow;
@property (retain, nonatomic) NSNumber *maxNccHigh;
@property (retain, nonatomic) NSNumber *ignoredStitches;
@property (retain, nonatomic) NSArray *assessmentsPRD;
@property (retain, nonatomic) NSNumber *assessmentFakePRD;
@property (retain, nonatomic) NSNumber *assessmentLivePRD;
@property (retain, nonatomic) NSNumber *assessmentID;
@property (retain, nonatomic) NSArray *timestampsID;
@property (retain, nonatomic) NSArray *timestampsButtonPressed;
@property (retain, nonatomic) NSString *ageLabel;
@property (retain, nonatomic) NSString *sexLabel;
@property (retain, nonatomic) NSString *skintoneLabel;
@property (retain, nonatomic) NSString *ethnicityLabel;
@property (retain, nonatomic) NSString *faceHairLabel;
@property (retain, nonatomic) NSString *headgearLabel;
@property (retain, nonatomic) NSString *glassesLabel;
@property (retain, nonatomic) NSArray *luxValues;
@property (retain, nonatomic) NSData *boundACL;

- (void).cxx_destruct;

@end
