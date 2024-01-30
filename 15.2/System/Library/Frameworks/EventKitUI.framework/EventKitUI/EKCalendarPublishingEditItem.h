@class NSString, UIActivityIndicatorView;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate> {
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic) BOOL published;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)footerTitle;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0;
- (id)pubishURL;
- (id)calendarTitle;
- (void)_publishChanged:(id)a0;

@end
