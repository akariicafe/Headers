@class EKCalendarChooser, EKEventStore;

@interface CSDefaultCalendarPane : PSEditingPane {
    EKEventStore *_store;
    EKCalendarChooser *_chooser;
    BOOL _dontSetDefaultCalendar;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)childViewControllerForHostingViewController;
- (void)setPreferenceSpecifier:(id)a0;
- (id)preferenceValue;
- (void).cxx_destruct;
- (void)_updateCheckedCalendarForSource:(id)a0;
- (BOOL)drawLabel;

@end
