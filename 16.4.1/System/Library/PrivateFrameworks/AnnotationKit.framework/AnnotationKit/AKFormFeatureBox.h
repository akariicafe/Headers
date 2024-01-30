@class AKFormFeatureLine;

@interface AKFormFeatureBox : AKFormFeature

@property (nonatomic) unsigned long long flags;
@property (nonatomic) BOOL widthExpands;
@property (nonatomic, getter=isMultiline) BOOL multiline;
@property (nonatomic) unsigned long long alignment;
@property (retain, nonatomic) AKFormFeatureLine *baseline;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } enclosingRegionRect;

+ (id)boxWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onPage:(id)a1 flags:(unsigned long long)a2 baseline:(id)a3;

- (void).cxx_destruct;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onPage:(id)a1 flags:(unsigned long long)a2 baseline:(id)a3;

@end
