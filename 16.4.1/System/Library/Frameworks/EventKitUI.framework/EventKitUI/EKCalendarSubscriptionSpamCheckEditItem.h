@class NSURL, UITableViewCell;
@protocol EKCalendarSubscriptionSpamCheckEditItemDelegate;

@interface EKCalendarSubscriptionSpamCheckEditItem : EKCalendarEditItem {
    NSURL *_currentURL;
    BOOL _inThrottlePeriod;
    int _state;
    UITableViewCell *_cell;
}

@property (weak, nonatomic) id<EKCalendarSubscriptionSpamCheckEditItemDelegate> subscriptionSpamDelegate;

- (void)_setState:(int)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfSubitems;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)_receivedSpamCheckResult:(BOOL)a0 forURL:(id)a1;
- (void)_sendSpamCheckRequest;
- (void)_throttlePeriodEnded;
- (void)setURLToCheck:(id)a0;

@end
