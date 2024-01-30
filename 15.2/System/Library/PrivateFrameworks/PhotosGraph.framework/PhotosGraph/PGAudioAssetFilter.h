@class NSString, NSIndexSet;

@interface PGAudioAssetFilter : NSObject <PGAssetFilter>

@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSIndexSet *audioClassifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAudioClassifications:(id)a0;
- (id)filteredAssetsFromAssets:(id)a0;
- (BOOL)passesWithAsset:(id)a0;

@end
