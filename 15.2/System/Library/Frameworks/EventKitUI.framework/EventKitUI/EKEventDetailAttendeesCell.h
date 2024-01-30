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

- (void)layoutForWidth:(double)a0 position:(int)a1;
- (BOOL)update;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (id)_attendeesListView;
- (double)headerInset;
- (double)listToTitle;
- (double)footerInset;
- (id)_attendeesWithoutOrganizerAndLocations;
- (void)_setAttendees:(id)a0;
- (double)displayHeight;
- (void)_attendeesDidFinishLoadingForTest;

@end
