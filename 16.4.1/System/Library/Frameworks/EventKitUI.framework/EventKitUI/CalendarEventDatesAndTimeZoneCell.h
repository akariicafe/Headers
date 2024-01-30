@class UILabel;

@interface CalendarEventDatesAndTimeZoneCell : PreferencesDoubleTwoPartValueCell {
    UILabel *_textLabel3;
    UILabel *_detailLabel3;
}

@property (readonly, retain, nonatomic) UILabel *textLabel3;
@property (readonly, retain, nonatomic) UILabel *detailLabel3;

- (void).cxx_destruct;
- (void)_layoutSubviewsCore;
- (void)layoutText:(id)a0 andValue:(id)a1;

@end
