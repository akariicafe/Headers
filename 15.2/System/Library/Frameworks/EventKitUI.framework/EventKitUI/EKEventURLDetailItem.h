@class NSURL, UITableViewCell, SGSuggestedEventLaunchInfo;

@interface EKEventURLDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    SGSuggestedEventLaunchInfo *_launchInfo;
    NSURL *_url;
}

+ (Class)_SGSuggestionsServiceClass;

- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;

@end
