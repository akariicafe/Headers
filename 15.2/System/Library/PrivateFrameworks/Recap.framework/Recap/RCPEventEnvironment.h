@class NSString, NSArray;

@interface RCPEventEnvironment : NSObject <NSCoding>

@property (nonatomic) long long machTimeDenominator;
@property (nonatomic) long long machTimeNumerator;
@property (nonatomic) double startTimeAsIntervalSince1970;
@property (nonatomic) unsigned long long startTimeAsMachTimestamp;
@property (nonatomic) double timeScale;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *recapVersion;
@property (nonatomic) long long homeButtonHardware;
@property (nonatomic) BOOL isSimulator;
@property (retain, nonatomic) NSArray *screens;
@property (nonatomic) int touchScanRate;
@property (nonatomic) int pointerScanRate;

+ (id)currentEnvironment;

- (void)setStartDate:(id)a0 machAbsoluteTime:(unsigned long long)a1;
- (BOOL)hasAbsoluteTimeCorrelation;
- (unsigned long long)machAbsoluteTimeForTimeIntervalSince1970:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)machAbsoluteTimeForTimeInterval:(double)a0;
- (double)timeIntervalSince1970ForMachAbsoluteTime:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (double)timeIntervalForMachAbsoluteTime:(unsigned long long)a0;
- (id)timeDescriptionForEvent:(id)a0;
- (double)speedFactorToAdjustRecordingEnvironment:(id)a0;

@end
