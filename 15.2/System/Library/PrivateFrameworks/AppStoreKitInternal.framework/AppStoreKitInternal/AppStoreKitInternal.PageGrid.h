@class NSString;

@interface AppStoreKitInternal.PageGrid : NSObject <UITraitEnvironment> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ containerWidth;
    void /* unknown type, empty encoding */ containerHeight;
    void /* unknown type, empty encoding */ safeAreaInsets;
    void /* unknown type, empty encoding */ activeBreakPoint;
    void /* unknown type, empty encoding */ breakpoints;
    void /* unknown type, empty encoding */ requiresAdditionalSafeAreaMargins;
    void /* unknown type, empty encoding */ columnCount;
    void /* unknown type, empty encoding */ columnWidth;
    void /* unknown type, empty encoding */ largestPossibleColumnWidth;
    void /* unknown type, empty encoding */ interColumnSpace;
    void /* unknown type, empty encoding */ interRowSpace;
    void /* unknown type, empty encoding */ horizontalMargins;
    void /* unknown type, empty encoding */ horizontalDirectionalMargins;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ traitCollection;
@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;

@end
