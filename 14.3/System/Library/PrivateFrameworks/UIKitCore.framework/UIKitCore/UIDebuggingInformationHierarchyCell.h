@class NSLayoutConstraint, NSString, UILabel, NSIndexPath, UIButton;
@protocol UIDebuggingInformationHierarchyCellDelegate;

@interface UIDebuggingInformationHierarchyCell : UICollectionViewCell {
    UIButton *_disclosureButton;
    UILabel *_mainLabel;
    UIButton *_infoButton;
    NSIndexPath *_indexPath;
    BOOL _collapsedBeneath;
    NSLayoutConstraint *_disclosureButtonAvailableConstraint;
    NSLayoutConstraint *_disclosureButtonUnavailableConstraint;
}

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) UIButton *infoButton;
@property (weak, nonatomic) id<UIDebuggingInformationHierarchyCellDelegate> delegate;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL disclosureIndicatorHidden;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;
- (void)deliverToggle;
- (void)displayDetailsForCell;

@end
