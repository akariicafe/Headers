@class NSString, UIView;
@protocol SiriUIReusableView, CRKComposableView;

@interface SiriUICardSectionView : UIView <CRKCardSectionView>

@property (retain, nonatomic) UIView<SiriUIReusableView> *headerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView<SiriUIReusableView> *footerView;
@property (nonatomic) double headerViewHeight;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double footerViewHeight;
@property (copy, nonatomic) NSString *cardSectionViewIdentifier;
@property (weak, nonatomic) UIView<CRKComposableView> *composedSuperview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeThatFitsCardSection:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;

- (id)accessibilityIdentifier;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)removeFromComposedSuperview;

@end
