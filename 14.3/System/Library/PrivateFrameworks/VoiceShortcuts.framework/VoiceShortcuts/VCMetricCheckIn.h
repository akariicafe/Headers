@class NSUserDefaults, NSDate;

@interface VCMetricCheckIn : NSObject

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, copy, nonatomic) NSDate *currentDate;
@property (readonly, copy, nonatomic) NSDate *checkInDate;
@property (readonly, copy, nonatomic) NSDate *intervalStartDate;

+ (id)recentCheckInWithMode:(long long)a0;

- (void).cxx_destruct;
- (id)calendar;
- (id)initWithCurrentDate:(id)a0 mode:(long long)a1 defaults:(id)a2;
- (BOOL)isCheckInAllowed;
- (void)updateCheckInToNow;
- (id)checkInKey;

@end
