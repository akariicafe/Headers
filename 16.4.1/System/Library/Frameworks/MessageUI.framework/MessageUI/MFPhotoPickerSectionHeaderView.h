@class NSString, UILabel, UIButton;

@interface MFPhotoPickerSectionHeaderView : UICollectionReusableView <MFReusableIdentifiable>

@property (class, readonly, nonatomic) NSString *reusableIdentifier;

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)addAllPhotosTarget:(id)a0 action:(SEL)a1;

@end
