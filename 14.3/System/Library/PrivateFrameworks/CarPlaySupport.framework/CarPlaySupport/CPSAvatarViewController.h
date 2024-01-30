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

- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (id)initWithEntity:(id)a0;
- (void)setupViews;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)updateViews;
- (void)updateWithEntity:(id)a0;

@end
