@class NSNumber, NSArray, NSString;

@interface PADClassifierResult : NSObject

@property (retain, nonatomic) NSNumber *livenessLabel;
@property (retain, nonatomic) NSArray *gestureSequence;
@property (retain, nonatomic) NSArray *assessmentsFAC;
@property (retain, nonatomic) NSArray *assessmentsPRD;
@property (retain, nonatomic) NSArray *assessmentsTA;
@property (retain, nonatomic) NSArray *timestampsFAC;
@property (retain, nonatomic) NSArray *faceprintsID;
@property (retain, nonatomic) NSArray *timestampsID;
@property (retain, nonatomic) NSArray *timestampsButtonPressed;
@property (retain, nonatomic) NSNumber *assessmentFAC;
@property (retain, nonatomic) NSNumber *assessmentTA;
@property (retain, nonatomic) NSNumber *maxNccLow;
@property (retain, nonatomic) NSNumber *maxNccHigh;
@property (retain, nonatomic) NSNumber *ignoredStitches;
@property (retain, nonatomic) NSNumber *assessmentFakePRD;
@property (retain, nonatomic) NSNumber *assessmentLivePRD;
@property (retain, nonatomic) NSNumber *assessmentID;
@property (retain, nonatomic) NSString *ageLabel;
@property (retain, nonatomic) NSString *sexLabel;
@property (retain, nonatomic) NSString *skintoneLabel;
@property (retain, nonatomic) NSString *ethnicityLabel;
@property (retain, nonatomic) NSString *faceHairLabel;
@property (retain, nonatomic) NSString *headgearLabel;
@property (retain, nonatomic) NSString *glassesLabel;

- (void).cxx_destruct;

@end
