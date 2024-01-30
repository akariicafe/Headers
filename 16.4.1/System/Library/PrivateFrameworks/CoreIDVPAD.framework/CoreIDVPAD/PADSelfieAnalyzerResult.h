@class NSNumber, NSString;

@interface PADSelfieAnalyzerResult : NSObject

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
