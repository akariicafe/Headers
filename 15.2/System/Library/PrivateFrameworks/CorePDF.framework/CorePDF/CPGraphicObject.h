@class CPParagraph, CPTextLine, CPChunk;
@protocol CPGraphicUser;

@interface CPGraphicObject : CPChunk {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderedBounds;
    BOOL isInZoneBorder;
    int zoneGraphicType;
    CPTextLine *anchoringTextLine;
    CPChunk<CPGraphicUser> *user;
}

@property (nonatomic) unsigned int clipIndex;
@property (retain, nonatomic) CPParagraph *anchoringParagraph;

- (void)setUser:(id)a0;
- (BOOL)isVisible;
- (id)user;
- (id)init;
- (void)dealloc;
- (unsigned short)unicode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderedBounds;
- (BOOL)isNarrow;
- (BOOL)canBeContainer;
- (BOOL)isIndivisible;
- (BOOL)isInZoneBorder;
- (void)setIsInZoneBorder:(BOOL)a0;
- (int)zoneGraphicType;
- (void)setZoneGraphicType:(int)a0;
- (void)setAnchoringTextLine:(id)a0;
- (id)anchoringTextLine;

@end
