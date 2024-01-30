@class NSTimeZone, NSCalendar, NSString, CLRegion, NSDate, NSDictionary;

@interface UILocalNotification : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) unsigned long long repeatInterval;
@property (copy, nonatomic) NSCalendar *repeatCalendar;
@property (copy, nonatomic) CLRegion *region;
@property (nonatomic) BOOL regionTriggersOnce;
@property (copy, nonatomic) NSString *alertBody;
@property (nonatomic) BOOL hasAction;
@property (copy, nonatomic) NSString *alertAction;
@property (copy, nonatomic) NSString *alertLaunchImage;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *soundName;
@property (nonatomic) long long applicationIconBadgeNumber;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *category;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)init;
- (id)nextFireDateForLastFireDate:(id)a0;
- (BOOL)isTriggeredByDate;
- (long long)compareFireDates:(id)a0;
- (id)nextFireDateAfterDate:(id)a0 localTimeZone:(id)a1;
- (BOOL)isTriggeredByRegion;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)validate;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
