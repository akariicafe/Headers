@class NSArray, NSString, NSDictionary;
@protocol PFStoryRecipeSongAsset, PFStoryRecipeStyle;

@interface PFStoryConcreteRecipe : NSObject <PFStoryRecipe> {
    NSString *_currentStyleIdentifier;
}

@property (readonly, copy, nonatomic) NSArray *libraries;
@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSArray *presentations;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) long long majorVersion;
@property (readonly, nonatomic) long long minorVersion;
@property (readonly, nonatomic) long long numberOfAssets;
@property (readonly, nonatomic) struct { long long kind; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } preferredDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration; } specificDurationInfo; } overallDurationInfo;
@property (readonly, copy, nonatomic) id<PFStoryRecipeStyle> currentStyle;
@property (readonly, copy, nonatomic) id<PFStoryRecipeSongAsset> currentStyleSongAsset;
@property (readonly, copy, nonatomic) NSDictionary *seedSongIdentifiersByCatalog;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) long long numberOfPresentations;
@property (readonly, nonatomic) NSDictionary *autoEditDecisionLists;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isArray:(id)a0 equalToArray:(id)a1 usingObjectEquality:(id /* block */)a2;
- (BOOL)_isDictionary:(id)a0 equalToDictionary:(id)a1 usingObjectEquality:(id /* block */)a2;
- (id)assetAtIndex:(long long)a0;
- (id)assetWithKind:(long long)a0 identifier:(id)a1;
- (void)enumerateAssetsWithKind:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithContentIdentifier:(id)a0 majorVersion:(long long)a1 minorVersion:(long long)a2 libraries:(id)a3 assets:(id)a4 overallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a5 currentStyle:(id)a6 seedSongIdentifiersByCatalog:(id)a7 autoDecisionLists:(id)a8 presentations:(id)a9;
- (BOOL)isEqualToRecipe:(id)a0;
- (id)libraryWithKind:(long long)a0;
- (id)presentationAtIndex:(long long)a0;
- (id)seedSongAssetForCatalog:(id)a0;

@end
