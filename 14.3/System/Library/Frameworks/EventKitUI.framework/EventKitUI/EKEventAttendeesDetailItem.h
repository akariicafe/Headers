@class NSArray, NSString, NSMutableDictionary, UITableViewCell, EKEventDetailAttendeesCell;

@interface EKEventAttendeesDetailItem : EKEventDetailItem <EKEventDetailAttendeeCellDelegate> {
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

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)eventDetailAttendeeCellWantsRefreshForHeightChange;
- (unsigned long long)numberOfSubitems;
- (void)eventViewController:(id)a0 didSelectSubitem:(unsigned long long)a1;

@end
