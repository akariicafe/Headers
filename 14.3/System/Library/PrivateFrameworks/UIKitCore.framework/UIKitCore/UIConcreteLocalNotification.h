@class NSTimeZone, NSCalendar, NSString, CLRegion, NSDate, NSData;

@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding> {
    NSDate *fireDate;
    NSTimeZone *timeZone;
    unsigned long long repeatInterval;
    NSCalendar *repeatCalendar;
    CLRegion *region;
    BOOL regionTriggersOnce;
    NSString *alertBody;
    BOOL hasAction;
    NSString *alertAction;
    NSString *alertLaunchImage;
    NSString *alertTitle;
    NSString *soundName;
    long long applicationIconBadgeNumber;
    NSData *userInfoData;
    NSString *category;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setRegion:(id)a0;
- (void)setTimeZone:(id)a0;
- (id)fireDate;
- (void)setCategory:(id)a0;
- (void)setAlertBody:(id)a0;
- (void)setFireDate:(id)a0;
- (unsigned long long)repeatInterval;
- (id)region;
- (id)userInfo;
- (id)init;
- (void)setAlertTitle:(id)a0;
- (void)setAlertAction:(id)a0;
- (void)_setUserInfoData:(id)a0;
- (void)setApplicationIconBadgeNumber:(long long)a0;
- (void)setRegionTriggersOnce:(BOOL)a0;
- (id)repeatCalendar;
- (long long)applicationIconBadgeNumber;
- (BOOL)regionTriggersOnce;
- (void).cxx_destruct;
- (id)nextFireDateForLastFireDate:(id)a0;
- (BOOL)isTriggeredByDate;
- (long long)compareFireDates:(id)a0;
- (id)nextFireDateAfterDate:(id)a0 localTimeZone:(id)a1;
- (BOOL)isTriggeredByRegion;
- (void)setUserInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)validate;
- (void)setAlertLaunchImage:(id)a0;
- (id)timeZone;
- (unsigned long long)hash;
- (BOOL)isValid;
- (void)setRepeatInterval:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)category;
- (BOOL)hasAction;
- (id)description;
- (id)alertBody;
- (BOOL)isEqual:(id)a0;
- (id)alertTitle;
- (id)alertAction;
- (id)alertLaunchImage;
- (void)setSoundName:(id)a0;
- (id)soundName;
- (void)encodeWithCoder:(id)a0;
- (void)setRepeatCalendar:(id)a0;
- (void)setHasAction:(BOOL)a0;

@end
