@class TSWPPadding, TSULocale;
@protocol TSWPStyleProviding;

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate> {
    TSWPPadding *mPadding;
    int mVerticalAlignment;
}

@property (nonatomic) double maxWidthForChildren;
@property (weak, nonatomic) id<TSWPStyleProviding> styleProvidingSource;
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) TSWPPadding *padding;
@property (readonly, nonatomic) TSULocale *locale;
@property (readonly, nonatomic) BOOL shouldHyphenate;
@property (readonly, nonatomic) BOOL forceWesternLineBreaking;

- (void).cxx_destruct;
- (id)initWithPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 verticalAlignment:(int)a1 locale:(id)a2 shouldHyphenate:(BOOL)a3;

@end
