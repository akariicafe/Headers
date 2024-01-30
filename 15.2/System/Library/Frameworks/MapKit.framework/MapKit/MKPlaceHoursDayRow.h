@class NSLayoutConstraint, NSString, MKPlaceHoursView;

@interface MKPlaceHoursDayRow : MKPlaceSectionRowView <MKPlaceHoursViewDelegate>

@property (retain, nonatomic) MKPlaceHoursView *hoursView;
@property (retain, nonatomic) NSLayoutConstraint *topAnchorToTopLabelBaseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBusinessHours:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_setUpViewsForPlaceHoursDayRow;
- (void)_setUpConstraints;
- (void)hoursViewDidUpdate:(id)a0;

@end
