@interface SleepHealthUI.ScheduleOccurrenceView : UIView {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ headerLabel;
    void /* unknown type, empty encoding */ bedtimeComponentView;
    void /* unknown type, empty encoding */ wakeUpComponentView;
    void /* unknown type, empty encoding */ horizontalPadding;
    void /* unknown type, empty encoding */ currentLayoutConstraints;
    void /* unknown type, empty encoding */ isUsingVerticalLayout;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
