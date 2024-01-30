@class UIImageView, NSArray, NSString;
@protocol CPEntityImageProviding;

@interface CPSAvatarViewController : UIViewController <CPSEntityUpdateSupporting>

@property (retain, nonatomic) id<CPEntityImageProviding> entity;
@property (readonly, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithEntity:(id)a0;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setupViews;
- (id)preferredFocusEnvironments;
- (void)updateViews;
- (void)updateWithEntity:(id)a0;

@end
