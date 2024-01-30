@class NSMutableDictionary, NSDictionary, UICellAccessoryManager, NSString;

@interface UITableCellAccessoryLayout : NSObject <UICellAccessoryLayout>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalFrame;
@property (retain, nonatomic) NSDictionary *initialFrames;
@property (retain, nonatomic) NSDictionary *finalFrames;
@property (retain, nonatomic) NSMutableDictionary *initialAlphas;
@property (retain, nonatomic) NSMutableDictionary *finalAlphas;
@property (readonly, nonatomic) double _standardLayoutWidth;
@property (readonly, nonatomic) double _disclosureLayoutWidth;
@property (copy, nonatomic) id /* block */ spacingBlock;
@property (weak, nonatomic) UICellAccessoryManager *manager;
@property (nonatomic) double safeAreaInset;
@property (nonatomic) unsigned long long edge;
@property (copy, nonatomic) id /* block */ standardLayoutWidthProvider;
@property (copy, nonatomic) id /* block */ disclosureLayoutWidthProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForAccessoryAtIndex:(unsigned long long)a0 inAccessories:(id)a1 containerSize:(struct CGSize { double x0; double x1; })a2 withXOrigin:(double *)a3;
- (void).cxx_destruct;
- (void)prepareLayoutForAccessories:(id)a0 previousAccessories:(id)a1 configurationIdentifier:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endLayout;
- (double)finalAlphaForAccessory:(id)a0;
- (double)_layoutWidthForAccessory:(id)a0 withItemWidth:(double)a1;
- (double)_totalWidthForAccessories:(id)a0 withContainerSize:(struct CGSize { double x0; double x1; })a1;
- (id)_framesForAccessories:(id)a0 withContainerSize:(struct CGSize { double x0; double x1; })a1 outTotalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (double)initialAlphaForAccessory:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForAccessory:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForAccessory:(id)a0;

@end
