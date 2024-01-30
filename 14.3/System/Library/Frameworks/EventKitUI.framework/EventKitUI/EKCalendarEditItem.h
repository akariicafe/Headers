@class EKEventStore, EKCalendar;
@protocol EKStyleProvider, EKCalendarEditItemDelegate;

@interface EKCalendarEditItem : NSObject {
    EKEventStore *_store;
}

@property (weak, nonatomic) id<EKCalendarEditItemDelegate> delegate;
@property (retain, nonatomic) id<EKStyleProvider> styleProvider;
@property (readonly, nonatomic) EKCalendar *calendar;

- (BOOL)becomeFirstResponder;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)setCalendar:(id)a0 store:(id)a1;
- (void)applyStyleProviderToCell:(id)a0;
- (BOOL)configureWithCalendar:(id)a0;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (unsigned long long)numberOfSubitems;
- (id)headerTitle;
- (BOOL)calendarEditor:(id)a0 shouldSelectSubitem:(unsigned long long)a1;
- (void)layoutForWidth:(double)a0;
- (id)footerViewForSection;
- (double)footerHeightForSection;
- (BOOL)saveStateToCalendar:(id)a0;

@end
