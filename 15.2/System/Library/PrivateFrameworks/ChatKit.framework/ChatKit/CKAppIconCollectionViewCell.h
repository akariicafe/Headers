@class UIImageView, NSMutableArray, CKAppIconView;

@interface CKAppIconCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) CKAppIconView *appContentView;
@property (retain, nonatomic) UIImageView *appIconView;
@property (nonatomic) long long appName;

+ (id)reuseIdentifier;

- (id)appIconForBundleID:(id)a0;
- (void)configureWithAppName:(long long)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;

@end
