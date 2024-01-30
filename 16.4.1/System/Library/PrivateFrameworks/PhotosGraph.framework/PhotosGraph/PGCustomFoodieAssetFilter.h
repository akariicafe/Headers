@class NSString, CLSSceneConfidenceThresholdHelper;

@interface PGCustomFoodieAssetFilter : NSObject <PGAssetFilter> {
    CLSSceneConfidenceThresholdHelper *_foodScenesHelper;
    CLSSceneConfidenceThresholdHelper *_drinkScenesHelper;
    CLSSceneConfidenceThresholdHelper *_forbiddenScenesHelper;
}

@property (class, readonly, nonatomic) NSString *name;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_passesWithAsset:(id)a0 curationContext:(id)a1;
- (id)filteredAssetsFromAssets:(id)a0 curationContext:(id)a1;

@end
