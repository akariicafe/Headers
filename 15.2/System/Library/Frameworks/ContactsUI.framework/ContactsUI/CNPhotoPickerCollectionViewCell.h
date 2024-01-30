@class NSUUID, CAShapeLayer, UILabel, UIView;

@interface CNPhotoPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CAShapeLayer *selectionLayer;
@property (retain, nonatomic) UILabel *captionLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *containerContentView;
@property (nonatomic) BOOL displaySelection;
@property (nonatomic) BOOL displaysBorder;
@property (nonatomic) unsigned long long cellStyle;
@property (retain, nonatomic) NSUUID *displaySessionUUID;

+ (id)cellIdentifier;
+ (struct CGPath { } *)selectionPathInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCellStyle:(unsigned long long)a1;
+ (double)cornerRadiusForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCellStyle:(unsigned long long)a1;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithView:(id)a0 animation:(unsigned long long)a1;
- (void)updateWithCaption:(id)a0;
- (void)updateCaptionFrame;
- (void)updateBorderTintColor:(id)a0;
- (void)clearContainerViewAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
