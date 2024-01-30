@class EKEventStore, EKCalendar;
@protocol EKStyleProvider, EKCalendarEditItemDelegate;

@interface EKCalendarEditItem : NSObject {
    EKEventStore *_store;
}

@property (weak, nonatomic) id<EKCalendarEditItemDelegate> delegate;
@property (retain, nonatomic) id<EKStyleProvider> styleProvider;
@property (readonly, nonatomic) EKCalendar *calendar;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (BOOL)becomeFirstResponder;
- (id)headerTitle;
- (unsigned long long)numberOfSubitems;
- (void).cxx_destruct;
- (void)reset;
- (id)footerTitle;
- (void)layoutForWidth:(double)a0;
- (void)applyStyleProviderToCell:(id)a0;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)calendarEditor:(id)a0 shouldSelectSubitem:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0;
- (BOOL)configureWithCalendar:(id)a0 store:(id)a1;
- (BOOL)saveStateToCalendar:(id)a0;
- (void)setCalendar:(id)a0 store:(id)a1;

@end
