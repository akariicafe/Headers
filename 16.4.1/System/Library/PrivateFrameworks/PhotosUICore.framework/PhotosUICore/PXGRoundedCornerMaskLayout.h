@class PXGPath, UIColor, NSString;

@interface PXGRoundedCornerMaskLayout : PXGLayout <PXGPathSource, PXGSolidColorSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct _PXGSpriteIndexRange { unsigned int location; unsigned int length; } _sideMaskSpriteIndexRange;
    long long _mediaVersion;
}

@property (copy, nonatomic) PXGPath *topLeftPath;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL continuousCorners;
@property (retain, nonatomic) UIColor *maskColor;
@property (nonatomic) double maskScale;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double leftMaskWidth;
@property (nonatomic) double rightMaskWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidatePath;
- (void)_invalidateContent;
- (void)update;
- (void)_updateContent;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (void)contentSizeDidChange;
- (void).cxx_destruct;
- (void)screenScaleDidChange;
- (void)_updatePath;
- (id)initWithCornerRadius:(double)a0 continuousCorners:(BOOL)a1 maskColor:(id)a2;
- (id)pathForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
