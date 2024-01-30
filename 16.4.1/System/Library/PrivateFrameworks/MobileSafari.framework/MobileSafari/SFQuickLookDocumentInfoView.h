@class UIStackView, NSString, UIImageView, UILabel, UIView, NSLayoutConstraint;

@interface SFQuickLookDocumentInfoView : UIView {
    UIStackView *_stackView;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    UIView *_spacingView;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    NSLayoutConstraint *_lineHeightBetweenIconAndFileNameLabelConstraint;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *fileSize;
@property (retain, nonatomic) NSString *fileType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_configureOrientationBasedConstraints:(long long)a0;
- (void)_updateDocumentSizeLabel;
- (void)_updatePropertiesDefinedByContentSizeCategory;

@end
