@class NSNumber;

@interface HAMenstrualAlgorithmsDeviationInput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowStartIrregular;
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowStartInfrequent;
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowStartProlonged;
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowStartSpotting;
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowEndIrregular;
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowEndInfrequent;
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowEndProlonged;
@property (retain, nonatomic) NSNumber *julianDayMinAnalysisWindowEndSpotting;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
