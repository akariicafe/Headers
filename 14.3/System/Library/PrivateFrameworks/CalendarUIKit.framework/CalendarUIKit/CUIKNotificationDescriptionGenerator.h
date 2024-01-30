@class NSNumberFormatter, NSDateFormatter;

@interface CUIKNotificationDescriptionGenerator : CUIKDescriptionGenerator {
    NSNumberFormatter *_numberFormatter;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_dateTimeFormatter;
}

+ (id)stringWithAutoCommentRemoved:(id)a0;
+ (id)stringWithOnlyAutoComment:(id)a0;
+ (id)comment:(id)a0 withInsertedAutoCommentForDate:(id)a1;
+ (id)sharedGenerator;
+ (id)autoCommentForProposedTime:(id)a0;

- (id)_adjustedTitle:(id)a0 maxLength:(unsigned long long)a1;
- (id)titleStringForNotification:(id)a0 withOptions:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)descriptionForNotification:(id)a0 withOptions:(unsigned long long)a1;
- (id)conflictStringForConflictDetails:(id)a0 maxTitleLength:(unsigned long long)a1 descriptions:(id)a2;
- (id)timePeriodForTimeInterval:(id)a0;
- (id)_sharedTimeFormatter;
- (id)_sharedNumberFormatter;
- (id)_sharedDateTimeFormatter;
- (id)conflictStringForConflictDetails:(id)a0 descriptions:(id)a1;
- (id)descriptionStringsForNotification:(id)a0 withOptions:(unsigned long long)a1;
- (id)conflictStringForConflictDetails:(id)a0 maxTitleLength:(unsigned long long)a1;
- (id)_sharedDateFormatter;

@end
