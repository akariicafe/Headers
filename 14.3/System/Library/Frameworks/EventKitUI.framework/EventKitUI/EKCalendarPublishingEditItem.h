@class UITableViewHeaderFooterView, NSString, UIActivityIndicatorView, UIView;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate> {
    UITableViewHeaderFooterView *_footerView;
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic) BOOL published;
@property (readonly, nonatomic) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)pubishURL;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)reset;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)calendarTitle;
- (void)_publishChanged:(id)a0;
- (BOOL)configureWithCalendar:(id)a0;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (unsigned long long)numberOfSubitems;
- (void)_applyStyleToUILabel:(id)a0;
- (id)footerViewForSection;
- (double)footerHeightForSection;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;

@end
