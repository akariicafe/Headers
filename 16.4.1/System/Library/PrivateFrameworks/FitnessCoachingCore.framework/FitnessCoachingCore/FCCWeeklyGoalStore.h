@class NSUserDefaults;

@interface FCCWeeklyGoalStore : NSObject {
    NSUserDefaults *_userDefaults;
}

- (void)clearContext;
- (id)init;
- (void).cxx_destruct;
- (id)currentDisplayContext;
- (void)updateDisplayContext:(id)a0;

@end
