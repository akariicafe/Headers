@class CUIImage;

@interface _CUINineImagePieces : NSObject {
    CUIImage *_center;
    CUIImage *_topLeft;
    CUIImage *_top;
    CUIImage *_topRight;
    CUIImage *_right;
    CUIImage *_bottomRight;
    CUIImage *_bottom;
    CUIImage *_bottomLeft;
    CUIImage *_left;
    BOOL _tileCenterAndEdges;
}

- (id)top;
- (id)bottom;
- (id)center;
- (id)topRight;
- (id)right;
- (id)bottomRight;
- (id)topLeft;
- (void)dealloc;
- (id)bottomLeft;
- (id)initWithCenter:(id)a0 topLeft:(id)a1 top:(id)a2 topRight:(id)a3 right:(id)a4 bottomRight:(id)a5 bottom:(id)a6 bottomLeft:(id)a7 left:(id)a8 tileCenterAndEdges:(BOOL)a9;
- (BOOL)tileCenterAndEdges;
- (id)left;

@end
