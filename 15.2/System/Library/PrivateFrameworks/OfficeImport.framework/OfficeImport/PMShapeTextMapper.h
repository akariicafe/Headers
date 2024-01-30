@class OADOrientedBounds, CMStyle, OADTextBody;

@interface PMShapeTextMapper : CMMapper {
    OADTextBody *mTextBody;
    OADOrientedBounds *mBounds;
    CMStyle *mStyle;
    BOOL mRectangular;
}

- (void).cxx_destruct;
- (unsigned char)textAnchor;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithOadTextBody:(id)a0 bounds:(id)a1 parent:(id)a2;
- (void)setRectangular:(BOOL)a0;
- (BOOL)isTableCellContent;

@end
