@class OADOrientedBounds, CMStyle, OADTextBody;

@interface PMShapeTextMapper : CMMapper {
    OADTextBody *mTextBody;
    OADOrientedBounds *mBounds;
    CMStyle *mStyle;
    BOOL mRectangular;
}

- (void).cxx_destruct;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithOadTextBody:(id)a0 bounds:(id)a1 parent:(id)a2;
- (unsigned char)textAnchor;
- (void)setRectangular:(BOOL)a0;
- (BOOL)isTableCellContent;

@end
