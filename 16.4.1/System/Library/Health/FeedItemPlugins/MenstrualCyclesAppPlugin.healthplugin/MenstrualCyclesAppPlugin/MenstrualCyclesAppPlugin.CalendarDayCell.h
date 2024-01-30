@class NSString;

@interface MenstrualCyclesAppPlugin.CalendarDayCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ day;
    void /* unknown type, empty encoding */ dayLabel;
    void /* unknown type, empty encoding */ menstruationIndicator;
    void /* unknown type, empty encoding */ separator;
    void /* unknown type, empty encoding */ lastSize;
    void /* unknown type, empty encoding */ dayLabelHeight;
    void /* unknown type, empty encoding */ dayLabelWidth;
    void /* unknown type, empty encoding */ dayLabelBaseline;
}

@property (nonatomic, readonly) BOOL axDayShowsDayIndicator;
@property (nonatomic, readonly) NSString *axDayLocalizedText;

- (void)applyLayoutAttributes:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
