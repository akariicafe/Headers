@class NSNumber, NSArray;

@interface HAMenstrualAlgorithmsHistoricalCycle : NSObject

@property (retain, nonatomic) NSNumber *fertilityStartJulianDay;
@property (retain, nonatomic) NSNumber *fertilityEndJulianDay;
@property (nonatomic) unsigned int julianDayOfMenstruationStart;
@property (nonatomic) unsigned int julianDayOfMenstruationEnd;
@property (nonatomic) BOOL isDeterminant;
@property (retain, nonatomic) NSArray *phases;

- (void).cxx_destruct;

@end
