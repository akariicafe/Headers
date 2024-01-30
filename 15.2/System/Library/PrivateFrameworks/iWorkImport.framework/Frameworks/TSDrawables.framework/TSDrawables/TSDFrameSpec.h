@class NSString, NSBundle, NSDictionary, NSMutableDictionary, TSUOnce;

@interface TSDFrameSpec : NSObject <NSCopying> {
    NSBundle *mBundle;
    NSDictionary *mInfoDictionary;
    BOOL mProviderWasInvalid;
    double mLeftInset;
    double mRightInset;
    double mTopInset;
    double mBottomInset;
    struct CGPoint { double x; double y; } mAdornmentPosition;
    double mMinimumAssetScale;
    int mTilingMode;
    BOOL mHasImages;
    BOOL mHasMask;
    BOOL mHasAdornment;
    NSMutableDictionary *mProvidersByKey;
    double mLeftWidth;
    double mRightWidth;
    double mTopHeight;
    double mBottomHeight;
    struct CGSize { double width; double height; } mAdornmentSize;
    TSUOnce *mLoadedImageMetricsOnce;
    _Atomic int mInterest;
}

@property (readonly, copy, nonatomic) NSString *frameName;
@property (readonly, nonatomic) BOOL displayInPicker;

+ (void)initialize;
+ (id)frameSpecWithName:(id)a0;
+ (id)p_imageKeys;

- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)i_minimumAssetScale;
- (BOOL)i_hasMask;
- (BOOL)i_hasImages;
- (double)i_leftInset;
- (double)i_rightInset;
- (double)i_bottomInset;
- (double)i_topInset;
- (BOOL)i_hasAdornment;
- (struct CGPoint { double x0; double x1; })i_adornmentPosition;
- (double)i_leftWidth;
- (double)i_rightWidth;
- (double)i_topHeight;
- (double)i_bottomHeight;
- (struct CGSize { double x0; double x1; })i_adornmentSize;
- (id)p_infoDictionary;
- (id)i_providerForIndex:(int)a0 mask:(BOOL)a1;
- (id)p_imageDataForKey:(id)a0;
- (void)p_loadImageMetrics;
- (void)i_addInterestInProviders;
- (void)i_removeInterestInProviders;
- (int)i_tilingMode;

@end
