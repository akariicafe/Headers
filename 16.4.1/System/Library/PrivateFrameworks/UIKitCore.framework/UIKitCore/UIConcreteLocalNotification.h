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

- (void)validate;
- (id)region;
- (void)setRegion:(id)a0;
- (void)setSoundName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)soundName;
- (void)setFireDate:(id)a0;
- (id)fireDate;
- (void)setTimeZone:(id)a0;
- (void)setCategory:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)alertLaunchImage;
- (void)setAlertTitle:(id)a0;
- (void)setAlertBody:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void)setUserInfo:(id)a0;
- (void)setRepeatInterval:(unsigned long long)a0;
- (id)alertTitle;
- (BOOL)isEqual:(id)a0;
- (id)alertBody;
- (id)category;
- (unsigned long long)hash;
- (id)userInfo;
- (void)setAlertLaunchImage:(id)a0;
- (id)init;
- (id)description;
- (id)timeZone;
- (void).cxx_destruct;
- (unsigned long long)repeatInterval;
- (void)setAlertAction:(id)a0;
- (void)_setUserInfoData:(id)a0;
- (id)alertAction;
- (long long)applicationIconBadgeNumber;
- (long long)compareFireDates:(id)a0;
- (BOOL)hasAction;
- (BOOL)isTriggeredByDate;
- (BOOL)isTriggeredByRegion;
- (id)nextFireDateAfterDate:(id)a0 localTimeZone:(id)a1;
- (id)nextFireDateForLastFireDate:(id)a0;
- (BOOL)regionTriggersOnce;
- (id)repeatCalendar;
- (void)setApplicationIconBadgeNumber:(long long)a0;
- (void)setHasAction:(BOOL)a0;
- (void)setRegionTriggersOnce:(BOOL)a0;
- (void)setRepeatCalendar:(id)a0;

@end
