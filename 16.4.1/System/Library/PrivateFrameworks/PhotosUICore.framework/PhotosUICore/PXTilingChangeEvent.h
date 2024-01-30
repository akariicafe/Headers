@class PXTilingLayoutInvalidationContext, PXTilingLayout;

@interface PXTilingChangeEvent : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) PXTilingLayout *layout;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) PXTilingLayoutInvalidationContext *context;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithChangeToContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithChangeToLayout:(id)a0;
- (id)initWithChangeToReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoordinateSpaceChange;
- (id)initWithLayoutInvalidationContext:(id)a0;

@end
