@class WDAContent;

@interface WMOfficeArtMapper : CMDrawableMapper {
    BOOL mFloating;
    BOOL mIsMapped;
    BOOL mIsInsideGroup;
    WDAContent *mContent;
    unsigned int mCurrentPage;
}

- (void)setCurrentPage:(unsigned int)a0;
- (void).cxx_destruct;
- (id)blipAtIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })expandedSizeForTextBox:(id)a0 withState:(id)a1;
- (id)initWithOadDrawable:(id)a0 asFloating:(BOOL)a1 parent:(id)a2;
- (id)initWithWdOfficeArt:(id)a0 parent:(id)a1;
- (BOOL)isInsideGroup;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapDiagramAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtGroupAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtImageAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtShapeAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtTextboxAt:(id)a0 withState:(id)a1;
- (void)mapTextBoxAt:(id)a0 withState:(id)a1;
- (void)setBoundingBox;
- (void)setIsInsideGroup:(BOOL)a0;
- (void)setWithClientData:(id)a0 state:(id)a1;

@end
