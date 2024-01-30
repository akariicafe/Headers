@class WDParagraph, OIXMLElement;

@interface WMParagraphMapper : CMMapper {
    WDParagraph *wdParagraph;
    OIXMLElement *mActiveNode;
    BOOL mIsDeleted;
}

+ (void)mapPlaceholderAt:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withState:(id)a2;

- (void).cxx_destruct;
- (id)activeNode;
- (BOOL)containsOfficeArt;
- (id)initWithBlock:(id)a0 parent:(id)a1;
- (BOOL)isCollapsable:(id)a0;
- (BOOL)isTextFrame;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapFieldMarkerAt:(id)a0 marker:(id)a1 withState:(id)a2;
- (void)mapParagraphBodyWithState:(id)a0;
- (void)mapRunAt:(id)a0 run:(id)a1 withState:(id)a2;
- (id)runAtIndex:(unsigned long long)a0;

@end
