@class NSString, NSDictionary;

@interface PGCustomFoodieAssetFilter : NSObject <PGAssetFilter> {
    NSDictionary *_confidenceThresholdByFoodSceneIdentifier;
    NSDictionary *_confidenceThresholdByDrinkSceneIdentifier;
    NSDictionary *_confidenceThresholdByForbiddenSceneIdentifiers;
}

@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)filteredAssetsFromAssets:(id)a0 curationContext:(id)a1;
- (BOOL)_passesWithAsset:(id)a0 curationContext:(id)a1;

@end
