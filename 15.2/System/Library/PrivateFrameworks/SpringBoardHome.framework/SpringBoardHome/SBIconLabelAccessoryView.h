@class NSString, UIImage;

@interface SBIconLabelAccessoryView : UIView <SBIconLabelAccessoryView>

@property (class, readonly, copy, nonatomic) NSString *labelAccessorySystemImageName;

@property (retain, nonatomic) UIImage *baseImage;
@property (readonly, nonatomic) BOOL hasBaseline;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)labelAccessorySystemImageScale;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)updateWithLegibilitySettings:(id)a0 labelFont:(id)a1;
- (void)updateWithBaseImage:(id)a0 legibilitySettings:(id)a1;

@end
