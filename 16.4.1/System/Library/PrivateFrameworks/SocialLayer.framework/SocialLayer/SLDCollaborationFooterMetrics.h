@class UISSlotStyle, SLDCollaborationFooterSlotTag, NSAttributedString;

@interface SLDCollaborationFooterMetrics : NSObject

@property (readonly, nonatomic) UISSlotStyle *style;
@property (readonly, nonatomic) SLDCollaborationFooterSlotTag *tag;
@property (readonly, copy, nonatomic) NSAttributedString *titleAttributedString;
@property (readonly, copy, nonatomic) NSAttributedString *subtitleAttributedString;
@property (readonly, nonatomic) double expectedHeight;

- (void).cxx_destruct;
- (struct CGColor { } *)labelColor;
- (struct CGColor { } *)secondaryLabelColor;
- (id)attributedStringWithString:(id)a0 textStyle:(const struct __CFString { } *)a1 color:(struct CGColor { } *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForString:(id)a0;
- (id)initWithSlotStyle:(id)a0 tag:(id)a1;

@end
