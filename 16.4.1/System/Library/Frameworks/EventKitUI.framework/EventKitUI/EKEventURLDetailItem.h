@class NSURL, UITableViewCell, SGSuggestedEventLaunchInfo;

@interface EKEventURLDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    SGSuggestedEventLaunchInfo *_launchInfo;
    NSURL *_url;
}

+ (Class)_SGSuggestionsServiceClass;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)_updateWithChanges;
- (void).cxx_destruct;
- (void)reset;

@end
