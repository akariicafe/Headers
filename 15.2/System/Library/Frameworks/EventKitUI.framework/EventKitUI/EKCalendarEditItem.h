@class EKEventStore, EKCalendar;
@protocol EKStyleProvider, EKCalendarEditItemDelegate;

@interface EKCalendarEditItem : NSObject {
    EKEventStore *_store;
}

@property (weak, nonatomic) id<EKCalendarEditItemDelegate> delegate;
@property (retain, nonatomic) id<EKStyleProvider> styleProvider;
@property (readonly, nonatomic) EKCalendar *calendar;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)headerTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)footerTitle;
- (unsigned long long)numberOfSubitems;
- (BOOL)becomeFirstResponder;
- (void)reset;
- (void)setCalendar:(id)a0 store:(id)a1;
- (BOOL)saveStateToCalendar:(id)a0;
- (BOOL)calendarEditor:(id)a0 shouldSelectSubitem:(unsigned long long)a1;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0;
- (void)layoutForWidth:(double)a0;
- (void)applyStyleProviderToCell:(id)a0;
- (BOOL)configureWithCalendar:(id)a0 store:(id)a1;

@end
