@class NSDate;

@interface WGCalendarWidgetInfo : WGWidgetInfo

@property (retain, nonatomic, setter=_setDate:) NSDate *date;

+ (BOOL)isCalendarExtension:(id)a0;

- (void)_resetIconsImpl;
- (void).cxx_destruct;
- (id)_queue_iconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 forWidgetWithIdentifier:(id)a2 extension:(id)a3;
- (id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)a0 extension:(id)a1;
- (id)initWithExtension:(id)a0;
- (void)_handleSignificantTimeChange:(id)a0;

@end
