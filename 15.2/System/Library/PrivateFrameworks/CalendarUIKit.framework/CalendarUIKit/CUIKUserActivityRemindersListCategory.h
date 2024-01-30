@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource {
    NSString *_title;
    NSString *_externalID;
    BOOL _predictable;
}

- (void)updateActivity:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (id)initWithRemindersList:(id)a0 forceLocal:(BOOL)a1;
- (BOOL)_isMatchForRemindersList:(id)a0;
- (id)initWithRemindersList:(id)a0;
- (id)remindersListFromStore:(id)a0;

@end
