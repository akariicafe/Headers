@class NSString, NSBundle, NSMutableDictionary;

@interface TSDFrameSpec : NSObject <NSCopying> {
    NSBundle *mBundle;
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
    BOOL mLoadedImageMetrics;
    double mLeftWidth;
    double mRightWidth;
    double mTopHeight;
    double mBottomHeight;
    struct CGSize { double width; double height; } mAdornmentSize;
    int mInterest;
}

@property (readonly, copy, nonatomic) NSString *frameName;
@property (readonly, nonatomic) BOOL displayInPicker;

+ (id)frameSpecWithName:(id)a0;
+ (id)frameSpecs;
+ (id)p_imageKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })i_adornmentSize;
- (void)i_addInterestInProviders;
- (struct CGPoint { double x0; double x1; })i_adornmentPosition;
- (double)i_bottomHeight;
- (double)i_bottomInset;
- (BOOL)i_hasAdornment;
- (BOOL)i_hasImages;
- (BOOL)i_hasMask;
- (double)i_leftInset;
- (double)i_leftWidth;
- (double)i_minimumAssetScale;
- (id)i_providerForIndex:(int)a0 mask:(BOOL)a1;
- (void)i_removeInterestInProviders;
- (double)i_rightInset;
- (double)i_rightWidth;
- (int)i_tilingMode;
- (double)i_topHeight;
- (double)i_topInset;
- (id)initWithBundle:(id)a0 isVolatile:(BOOL)a1;
- (id)p_imageDataForKey:(id)a0;
- (id)p_infoDictionary;
- (void)p_loadImageMetrics;

@end
