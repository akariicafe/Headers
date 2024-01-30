@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, SSRAssetManagerDelegate;

@interface SSRAssetManager : NSObject

@property (retain, nonatomic) NSArray *assetProviders;
@property (retain, nonatomic) NSString *currentLanguageCode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SSRAssetManagerDelegate> delegate;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (float)_convertVersionStringToFloat:(id)a0;
- (id)_latestVersionedAssetOfType:(unsigned long long)a0 fromProviders:(id)a1 forLocale:(id)a2;
- (id)allInstalledAssetsOfType:(unsigned long long)a0 forLanguage:(id)a1;
- (id)installedAssetOfType:(unsigned long long)a0 forLanguage:(id)a1;

@end
