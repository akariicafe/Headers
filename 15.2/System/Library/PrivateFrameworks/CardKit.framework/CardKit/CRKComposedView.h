@class NSArray, NSString, NSMutableArray;

@interface CRKComposedView : UIView <CRKComposableView> {
    NSMutableArray *_mutableCardSectionSubviews;
}

@property (retain, nonatomic) NSArray *cardSectionSubviews;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } cardSectionContentMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)a0;
- (void)addCardSectionSubview:(id)a0 withKeyline:(long long)a1;

@end
