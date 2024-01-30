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

- (id)alertTitle;
- (void)setRepeatInterval:(unsigned long long)a0;
- (unsigned long long)repeatInterval;
- (id)category;
- (id)userInfo;
- (void)validate;
- (void)setRepeatCalendar:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setCategory:(id)a0;
- (id)repeatCalendar;
- (id)timeZone;
- (void)setFireDate:(id)a0;
- (void)setAlertLaunchImage:(id)a0;
- (id)fireDate;
- (id)alertBody;
- (id)description;
- (BOOL)hasAction;
- (void)setRegion:(id)a0;
- (id)alertLaunchImage;
- (void)setSoundName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)soundName;
- (void)setAlertTitle:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAlertBody:(id)a0;
- (id)alertAction;
- (unsigned long long)hash;
- (void)setTimeZone:(id)a0;
- (void)setHasAction:(BOOL)a0;
- (id)region;
- (void)setAlertAction:(id)a0;
- (void)setUserInfo:(id)a0;
- (BOOL)regionTriggersOnce;
- (BOOL)isValid;
- (void)_setUserInfoData:(id)a0;
- (BOOL)isTriggeredByDate;
- (void)setApplicationIconBadgeNumber:(long long)a0;
- (void)setRegionTriggersOnce:(BOOL)a0;
- (long long)applicationIconBadgeNumber;
- (id)nextFireDateForLastFireDate:(id)a0;
- (id)nextFireDateAfterDate:(id)a0 localTimeZone:(id)a1;
- (long long)compareFireDates:(id)a0;
- (BOOL)isTriggeredByRegion;

@end
