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

- (id)initWithEntity:(id)a0;
- (void)updateViewConstraints;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (void)updateViews;
- (void)updateWithEntity:(id)a0;

@end
