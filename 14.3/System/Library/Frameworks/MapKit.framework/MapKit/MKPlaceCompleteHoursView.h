@class NSLayoutConstraint, NSArray, NSString, GEOLinkedService, UIView, UIImageView, _MKUILabel;

@interface MKPlaceCompleteHoursView : UIView <MKPlaceHoursViewDelegate> {
    GEOLinkedService *_linkedService;
    NSArray *_sortedBusinessHours;
    UIView *_containerViewForHoursAndCategoryName;
    UIImageView *_categoryIconView;
    _MKUILabel *_localizedCategoryNameLabel;
    NSLayoutConstraint *_hoursTopLabelBaselineToCategoryName;
}

@property (retain, nonatomic) NSArray *placeHoursViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)commonInit;
- (void)_setUpConstraints;
- (id)initWithLinkedService:(id)a0 showTodaysHoursOnly:(BOOL)a1;
- (void)_contentSizeDidChange;
- (void)hoursViewDidUpdate:(id)a0;

@end
