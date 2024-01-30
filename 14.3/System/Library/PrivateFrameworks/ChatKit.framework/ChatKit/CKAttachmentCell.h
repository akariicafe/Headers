@class NSString, NSArray, UIImage, UITapGestureRecognizer, UIImageView, NSObject, CKAttachmentItem, CKAnimatedImage;
@protocol CKAttachmentCellDelegate;

@interface CKAttachmentCell : UICollectionViewCell <CKAnimationTimerObserver, UIGestureRecognizerDelegate>

@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) UIImageView *irisBadgeView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (retain, nonatomic) UIImageView *checkmarkView;
@property (weak, nonatomic) NSObject<CKAttachmentCellDelegate> *delegate;
@property (retain, nonatomic) CKAttachmentItem *representedObject;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL isIrisAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)copy:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)delete:(id)a0;
- (void)more:(id)a0;
- (void).cxx_destruct;
- (void)updateAnimationTimerObserving;
- (struct CGImage { } *)_cgImageForUIImage:(id)a0;
- (void)animationTimerFired:(unsigned long long)a0;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)saveAttachment:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapGestureRecognized:(id)a0;

@end
