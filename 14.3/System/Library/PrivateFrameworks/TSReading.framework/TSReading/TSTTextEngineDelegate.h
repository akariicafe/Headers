@class TSWPPadding;

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate> {
    TSWPPadding *mPadding;
    unsigned int mVerticalAlignment;
}

- (unsigned int)verticalAlignment;
- (void)dealloc;
- (id)padding;
- (BOOL)forceWesternLineBreaking;
- (id)initWithPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 verticalAlignment:(unsigned int)a1;

@end
