@class NSString;

@interface AppRecommendations.AppRecommendationsTileViewController : UIViewController {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ useDefaultIcon;
    void /* unknown type, empty encoding */ appIdentifier;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, weak) void /* unknown type, empty encoding */ iconImageView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ descriptionLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ accessoryImageView;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)openAppStore:(id)a0;

@end
