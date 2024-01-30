@class TSULocale, TSWPPadding;

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate> {
    TSWPPadding *mPadding;
    int mVerticalAlignment;
}

@property (nonatomic) double maxWidthForChildren;
@property (readonly, nonatomic) TSULocale *locale;
@property (readonly, nonatomic) BOOL shouldHyphenate;

- (int)verticalAlignment;
- (void)dealloc;
- (id)padding;
- (BOOL)forceWesternLineBreaking;
- (id)initWithPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 verticalAlignment:(int)a1 locale:(id)a2 shouldHyphenate:(BOOL)a3;

@end
