@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource {
    NSString *_title;
    NSString *_externalID;
    BOOL _predictable;
}

- (void).cxx_destruct;
- (id)dictionary;
- (void)updateActivity:(id)a0;
- (id)initWithRemindersList:(id)a0;
- (BOOL)_isMatchForRemindersList:(id)a0;
- (id)remindersListFromStore:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithRemindersList:(id)a0 forceLocal:(BOOL)a1;

@end
