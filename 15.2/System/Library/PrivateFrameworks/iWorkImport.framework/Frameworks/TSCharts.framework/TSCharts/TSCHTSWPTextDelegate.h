@class TSWPPadding, TSULocale;
@protocol TSWPStyleProviding;

@interface TSCHTSWPTextDelegate : NSObject <TSWPTextDelegate>

@property (nonatomic) int verticalAlignment;
@property (retain, nonatomic) TSWPPadding *padding;
@property (nonatomic) double maxWidthForChildren;
@property (retain, nonatomic) TSULocale *locale;
@property (nonatomic) BOOL shouldHyphenate;
@property (weak, nonatomic) id<TSWPStyleProviding> styleProvidingSource;
@property (nonatomic) BOOL forceWesternLineBreaking;

- (void).cxx_destruct;

@end
