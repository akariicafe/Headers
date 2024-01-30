@class NSString;
@protocol SXHost, SXCalendarPresenter;

@interface SXCalendarEventActionActivityProvider : NSObject <SXActionActivityProvider>

@property (readonly, nonatomic) id<SXCalendarPresenter> calendarPresenter;
@property (readonly, nonatomic) id<SXHost> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)a0;
- (void)createEvent:(id)a0;
- (id)initWithCalendarPresenter:(id)a0 host:(id)a1;
- (void)showInCalendar:(id)a0;

@end
