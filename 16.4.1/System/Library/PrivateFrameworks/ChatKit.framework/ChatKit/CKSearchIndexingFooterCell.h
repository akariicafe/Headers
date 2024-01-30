@class UILabel, NSString;

@interface CKSearchIndexingFooterCell : UICollectionReusableView <CKSearchResultSupplementryCell>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) BOOL titleLabelHidden;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *subtitleString;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)desiredZPosition;
+ (id)supplementaryViewType;

@end
