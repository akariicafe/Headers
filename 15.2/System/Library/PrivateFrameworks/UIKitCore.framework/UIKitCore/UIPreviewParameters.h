@class UIBezierPath, UIColor, NSArray;

@interface UIPreviewParameters : NSObject <NSCopying> {
    NSArray *_textLineRects;
}

@property (nonatomic, getter=_previewMode, setter=_setPreviewMode:) long long previewMode;
@property (nonatomic) BOOL appliesShadow;
@property (nonatomic) BOOL hidesSourceViewDuringDropAnimation;
@property (readonly, nonatomic) UIBezierPath *effectiveShadowPath;
@property (nonatomic, getter=_textPathInsets, setter=_setTextPathInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } textPathInsets;
@property (nonatomic, getter=_textPathCornerRadius, setter=_setTextPathCornerRadius:) double textPathCornerRadius;
@property (readonly, nonatomic, getter=_isSingleLineText) BOOL singleLineText;
@property (copy, nonatomic) UIBezierPath *visiblePath;
@property (copy, nonatomic) UIBezierPath *shadowPath;
@property (copy, nonatomic) UIColor *backgroundColor;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTextLineRects:(id)a0;
- (id)_initWithMode:(long long)a0 visiblePath:(id)a1 backgroundColor:(id)a2;
- (unsigned long long)hash;

@end
