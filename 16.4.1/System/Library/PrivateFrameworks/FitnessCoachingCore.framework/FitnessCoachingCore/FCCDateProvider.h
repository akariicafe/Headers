@class NSUserDefaults;

@interface FCCDateProvider : NSObject {
    NSUserDefaults *_userDefaults;
}

- (id)coachingCalendar;
- (id)coachingDate;
- (id)init;
- (void).cxx_destruct;

@end
