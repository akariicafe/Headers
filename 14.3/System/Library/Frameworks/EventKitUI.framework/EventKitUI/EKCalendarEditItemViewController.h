@class EKEvent, NSString, EKEventStore, EKCalendarChooser, EKCalendar;

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate> {
    EKEventStore *_store;
    EKCalendarChooser *_chooser;
    unsigned long long _entityType;
    EKCalendar *_selectedCalendar;
}

@property (retain, nonatomic) EKCalendar *selectedCalendar;
@property (nonatomic) BOOL limitToSource;
@property (weak, nonatomic) EKEvent *event;
@property (nonatomic) BOOL onlyShowUnmanagedSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1 styleProvider:(id)a2;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1 styleProvider:(id)a2 entityType:(unsigned long long)a3;
- (void)calendarChooserSelectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1;

@end
