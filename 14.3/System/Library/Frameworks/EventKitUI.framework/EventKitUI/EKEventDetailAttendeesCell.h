@class NSLayoutConstraint, EKEventDetailAttendeesListView, UIImageView, NSArray, UILabel, NSObject, UIViewController;
@protocol EKEventDetailAttendeeCellDelegate;

@interface EKEventDetailAttendeesCell : EKEventDetailCell {
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_disclosure;
    NSLayoutConstraint *_listHeight;
    EKEventDetailAttendeesListView *_attendeesListView;
    NSArray *_cachedAttendeesWithoutOrganizerAndLocations;
}

@property (weak) UIViewController *viewController;
@property (weak) NSObject<EKEventDetailAttendeeCellDelegate> *attendeeCellDelegate;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (BOOL)update;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (id)_attendeesListView;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (double)headerInset;
- (double)listToTitle;
- (double)footerInset;
- (id)_attendeesWithoutOrganizerAndLocations;
- (void)_setAttendees:(id)a0;
- (double)displayHeight;
- (void)_attendeesDidFinishLoadingForTest;

@end
