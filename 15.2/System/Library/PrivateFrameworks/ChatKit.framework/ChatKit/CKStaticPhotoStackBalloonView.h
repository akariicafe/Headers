@class NSArray, CKStaticImageStackView;

@interface CKStaticPhotoStackBalloonView : CKBalloonView

@property (retain, nonatomic) CKStaticImageStackView *stackView;
@property (retain, nonatomic) NSArray *mediaObjects;

- (void)prepareForDisplay;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)stackCornerRadius;
- (void)configureForMessagePart:(id)a0;

@end
