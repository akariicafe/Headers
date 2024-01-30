@class NSCalendar, NSDate, NSLocale, UIView;
@protocol PKDatePickerInternalImplementationProtocol, PKDatePickerDelegate;

@interface PKDatePicker : UIView {
    UIView<PKDatePickerInternalImplementationProtocol> *_internalPicker;
}

@property (readonly, nonatomic) BOOL showsDay;
@property (readonly, nonatomic) BOOL showsMonth;
@property (readonly, nonatomic) BOOL showsYear;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *date;
@property (weak, nonatomic) id<PKDatePickerDelegate> delegate;
@property (nonatomic) BOOL usesDarkAppearance;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;
- (void)reconfigureToShowDay:(BOOL)a0 month:(BOOL)a1 year:(BOOL)a2 style:(unsigned long long)a3 locale:(id)a4 calendar:(id)a5;
- (Class)_classForDay:(BOOL)a0 month:(BOOL)a1 year:(BOOL)a2 style:(unsigned long long)a3;
- (void)_dateValueChanged:(id)a0;
- (void)_forceReloadInternalPicker;

@end
