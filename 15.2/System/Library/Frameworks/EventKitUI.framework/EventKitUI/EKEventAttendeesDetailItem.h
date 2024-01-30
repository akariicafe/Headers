@class NSArray, NSString, NSMutableDictionary, UITableViewCell, EKEventDetailAttendeesCell;

@interface EKEventAttendeesDetailItem : EKEventDetailItem <EKEventDetailAttendeeCellDelegate, EKEditItemViewControllerDelegate> {
    NSMutableDictionary *_attendeesCells;
    UITableViewCell *_titleCell;
    EKEventDetailAttendeesCell *_cell;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) NSArray *attendees;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)eventViewController:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)eventDetailAttendeeCellWantsRefreshForHeightChange;
- (void)eventDetailAttendeesCell:(id)a0 requestViewControllerPresentation:(id)a1;
- (unsigned long long)numberOfSubitems;
- (void)reset;

@end
