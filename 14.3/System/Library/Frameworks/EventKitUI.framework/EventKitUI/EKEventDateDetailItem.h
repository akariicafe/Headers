@class NSString, PreferencesDoubleTwoPartValueCell, NSDate;

@interface EKEventDateDetailItem : EKEventDetailItem <EKCellShortener> {
    PreferencesDoubleTwoPartValueCell *_cell;
    NSDate *_startDate;
    NSDate *_endDate;
    BOOL _indent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)shortenCell:(id)a0;
- (void)setEvent:(id)a0 store:(id)a1;

@end
