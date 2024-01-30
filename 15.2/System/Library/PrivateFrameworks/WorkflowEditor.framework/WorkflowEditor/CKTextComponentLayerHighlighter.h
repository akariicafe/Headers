@class CKHighlightOverlayLayer, CKTextComponentLayer;

@interface CKTextComponentLayerHighlighter : NSObject {
    CKTextComponentLayer *_textComponentLayer;
    CKHighlightOverlayLayer *_highlightOverlayLayer;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightedRange;

- (void).cxx_destruct;
- (void)layoutHighlight;
- (id)initWithTextComponentLayer:(id)a0;

@end
