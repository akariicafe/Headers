@class GEOLinkedService, MKPlaceCompleteHoursView;

@interface MKServiceHoursRow : MKPlaceSectionRowView

@property (retain, nonatomic) MKPlaceCompleteHoursView *completePlaceHoursView;
@property (retain, nonatomic) GEOLinkedService *linkedService;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (id)initWithLinkedService:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showTodaysHoursOnly:(BOOL)a2;

@end
