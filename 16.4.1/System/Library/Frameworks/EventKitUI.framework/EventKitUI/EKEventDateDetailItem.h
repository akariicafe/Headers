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
- (void)shortenCell:(id)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setEvent:(id)a0 store:(id)a1;
- (void)reset;

@end
