@class NSString, NSNumberFormatter;

@interface _CLKTimeFormatData : NSObject

@property (readonly, nonatomic) NSString *formatHourMinSecSubsec;
@property (readonly, nonatomic) NSString *formatHourMinSec;
@property (readonly, nonatomic) NSString *formatHourMin;
@property (readonly, nonatomic) NSString *formatMinSecSubsec;
@property (readonly, nonatomic) NSString *formatMinSec;
@property (readonly, nonatomic) NSString *formatMin;
@property (readonly, nonatomic) NSNumberFormatter *singleWidthNumberFormatter;
@property (readonly, nonatomic) NSNumberFormatter *doubleWidthNumberFormatter;

+ (id)_timeFormatDataAccessLock;
+ (id)_timeLocale;
+ (id)instanceForCurrentLocale;
+ (void)resetTimeFormatData;

- (id)init;
- (void).cxx_destruct;

@end
