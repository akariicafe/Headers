@class NSString;

@interface CDMAssetConfigItem : NSObject

@property (readonly, nonatomic) NSString *assetFolderName;
@property (readonly, nonatomic) NSString *trialFactorName;

- (void).cxx_destruct;
- (id)initWithAssetFolderName:(id)a0 trialFactorName:(id)a1;

@end
