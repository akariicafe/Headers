@class NSString, UIImageView, UIImage, UITapGestureRecognizer;
@protocol CKSharedContentsCollectionViewCellDelegate;

@interface CKSharedContentsCollectionViewCell : CKSharedAssetCollectionViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIImage *previewImage;
@property (retain, nonatomic) UIImageView *checkmarkView;
@property (weak, nonatomic) id<CKSharedContentsCollectionViewCellDelegate> delegate;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)more:(id)a0;
- (void)copy:(id)a0;
- (void)handleTap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)saveAttachment:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupTapGestureRecognizer;
- (void)toggleCheckmarkViewWithEnabled:(BOOL)a0;
- (void)delete:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
