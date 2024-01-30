@class UITableViewCell;
@protocol EKIdentityProtocol;

@interface EKEventOrganizerDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
}

@property (retain) id<EKIdentityProtocol> organizerOverride;
@property (nonatomic) BOOL hideDisclosureIndicator;

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)_updateDisclosureIndicator;
- (void).cxx_destruct;
- (void)reset;

@end
