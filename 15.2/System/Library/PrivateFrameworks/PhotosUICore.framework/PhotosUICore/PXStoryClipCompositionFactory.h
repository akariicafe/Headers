@class NSArray;
@protocol PXStoryClipComposition;

@interface PXStoryClipCompositionFactory : NSObject

@property (class, readonly, nonatomic) id<PXStoryClipComposition> oneUpComposition;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> aspectFitOneUpComposition;
@property (class, readonly, nonatomic) NSArray *defaultOneUpCompositions;
@property (class, readonly, nonatomic) NSArray *supportedOneUpCompositions;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> twoUpHalfLeadingHalfTrailingComposition;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> twoUpHalfTopHalfBottomComposition;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> twoUpOneThirdLeadingTwoThirdsTrailingComposition;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> twoUpTwoThirdsLeadingOneThirdTrailingComposition;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> twoUpOneThirdTopTwoThirdsBottomComposition;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> twoUpTwoThirdsTopOneThirdBottomComposition;
@property (class, readonly, nonatomic) NSArray *defaultTwoUpCompositions;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> twoUpOneThirdLeadingTwoThirdsTrailingAssetSplitComposition;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> twoUpTwoThirdsLeadingOneThirdTrailingAssetSplitComposition;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> twoUpOneThirdTopTwoThirdsBottomAssetSplitComposition;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> twoUpTwoThirdsTopOneThirdBottomAssetSplitComposition;
@property (class, readonly, nonatomic) NSArray *supportedTwoUpAssetSplitCompositions;
@property (class, readonly, nonatomic) NSArray *supportedTwoUpCompositions;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> threeUpVerticalThirdsComposition;
@property (class, readonly, nonatomic) id<PXStoryClipComposition> threeUpHorizontalThirdsComposition;
@property (class, readonly, nonatomic) NSArray *defaultThreeUpCompositions;
@property (class, readonly, nonatomic) NSArray *supportedThreeUpCompositions;
@property (class, readonly, nonatomic) NSArray *defaultNUpCompositions;
@property (class, readonly, nonatomic) NSArray *supportedNUpCompositions;
@property (class, readonly, nonatomic) NSArray *allDefaultCompositions;
@property (class, readonly, nonatomic) NSArray *allSupportedCompositions;

+ (id)oneUpCompositionWithAspectRatioNumerator:(long long)a0 denominator:(long long)a1;
+ (id)oneUpCompositionsWithAspectRatioPassingTest:(id /* block */)a0;

@end
