@class OADFill;

@interface CMImageFillMapper : CMMapper {
    OADFill *mFill;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBounds;
}

- (void).cxx_destruct;
- (BOOL)isCropped;
- (id)blipAtIndex:(unsigned int)a0;
- (id)convertMetafileToPdf:(id)a0 state:(id)a1;
- (id)initWithOadFill:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parent:(id)a2;
- (id)mainSubBlip;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)mapImageFill:(id)a0 withState:(id)a1;
- (void)mapImageFillAt:(id)a0 toStyle:(id)a1 withState:(id)a2;
- (void)mapNonImageFillAt:(id)a0 toStyle:(id)a1 withState:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })uncroppedBox;

@end
