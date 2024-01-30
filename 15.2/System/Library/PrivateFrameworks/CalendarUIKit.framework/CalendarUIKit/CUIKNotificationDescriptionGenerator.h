@class NSNumberFormatter, NSDateFormatter;

@interface CUIKNotificationDescriptionGenerator : CUIKDescriptionGenerator {
    NSNumberFormatter *_numberFormatter;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_dateTimeFormatter;
}

+ (id)sharedGenerator;
+ (id)comment:(id)a0 withInsertedAutoCommentForDate:(id)a1;
+ (id)stringWithAutoCommentRemoved:(id)a0;
+ (id)autoCommentForProposedTime:(id)a0;
+ (id)stringWithOnlyAutoComment:(id)a0;

- (void).cxx_destruct;
- (id)_sharedNumberFormatter;
- (id)_sharedDateFormatter;
- (id)conflictStringForConflictDetails:(id)a0 maxTitleLength:(unsigned long long)a1 descriptions:(id)a2;
- (id)_adjustedTitle:(id)a0 maxLength:(unsigned long long)a1;
- (id)_sharedTimeFormatter;
- (id)_sharedDateTimeFormatter;
- (id)timePeriodForTimeInterval:(id)a0;
- (id)conflictStringForConflictDetails:(id)a0 descriptions:(id)a1;
- (id)conflictStringForConflictDetails:(id)a0 maxTitleLength:(unsigned long long)a1;

@end
