@class NSString, NSAttributedString, UIColor;
@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXCMMInvitationViewModel : PXObservable

@property (readonly, copy, nonatomic) NSString *posterTitle;
@property (readonly, copy, nonatomic) NSString *posterSubtitle;
@property (readonly, copy, nonatomic) id<PXDisplayAsset> posterAsset;
@property (readonly, copy, nonatomic) id<PXUIImageProvider> posterMediaProvider;
@property (readonly, copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, copy, nonatomic) NSAttributedString *attributedSubtitle1;
@property (readonly, copy, nonatomic) NSAttributedString *attributedSubtitle2;
@property (readonly, nonatomic) UIColor *opaqueAncestorBackgroundColor;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;

- (void)performChanges:(id /* block */)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setAttributedTitle:(id)a0;
- (void)setPosterTitle:(id)a0;
- (void)setPosterSubtitle:(id)a0;
- (void)setPosterAsset:(id)a0;
- (void)setPosterMediaProvider:(id)a0;
- (void)setAttributedSubtitle1:(id)a0;
- (void)setAttributedSubtitle2:(id)a0;
- (void)setOpaqueAncestorBackgroundColor:(id)a0;

@end
