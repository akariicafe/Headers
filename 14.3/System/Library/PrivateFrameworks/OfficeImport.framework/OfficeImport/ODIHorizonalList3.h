@class ODIState;

@interface ODIHorizonalList3 : NSObject {
    unsigned int mMaxPointCount;
    ODIState *mState;
}

+ (BOOL)mapIdentifier:(id)a0 state:(id)a1;

- (void)map;
- (id)initWithState:(id)a0;
- (void).cxx_destruct;
- (void)setMaxPointCount:(unsigned int)a0;
- (void)mapRoofStyleFromPoint:(id)a0 shape:(id)a1;
- (void)mapOnePillarStyleFromPoint:(id)a0 shape:(id)a1;
- (void)mapPillarPoints:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)mapBaseStyleFromPoint:(id)a0 shape:(id)a1;

@end
