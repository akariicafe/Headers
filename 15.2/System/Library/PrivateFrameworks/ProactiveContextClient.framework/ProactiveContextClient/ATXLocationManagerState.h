@class NSArray, ATXLocationOfInterest, NSDate, CLLocation, ATXLocationManagerKnownLOIs;

@interface ATXLocationManagerState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXLocationOfInterest *currentLOI;
@property (retain, nonatomic) ATXLocationOfInterest *previousLOI;
@property (retain, nonatomic) NSArray *predictedNextLOIs;
@property (retain, nonatomic) NSArray *predictedExitTimes;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (readonly, nonatomic) ATXLocationManagerKnownLOIs *locationsOfInterest;
@property (readonly, nonatomic) CLLocation *homeLOI;
@property (readonly, nonatomic) CLLocation *workLOI;
@property (readonly, nonatomic) CLLocation *schoolLOI;
@property (readonly, nonatomic) CLLocation *gymLOI;

+ (id)merge:(id)a0 with:(id)a1;

- (void)expirePreviousLOIBefore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
