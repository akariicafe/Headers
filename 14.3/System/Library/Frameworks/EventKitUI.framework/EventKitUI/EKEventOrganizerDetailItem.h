@class UITableViewCell;
@protocol EKIdentityProtocol;

@interface EKEventOrganizerDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
}

@property (retain) id<EKIdentityProtocol> organizerOverride;
@property (nonatomic) BOOL hideDisclosureIndicator;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)_updateDisclosureIndicator;

@end
