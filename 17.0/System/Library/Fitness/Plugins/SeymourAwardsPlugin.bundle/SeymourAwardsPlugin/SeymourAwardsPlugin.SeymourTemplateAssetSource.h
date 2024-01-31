@class NSString;

@interface SeymourAwardsPlugin.SeymourTemplateAssetSource : NSObject <ACHTemplateAssetSource> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ assetsRootBundlePath;
}

@property (nonatomic, readonly) NSString *identifier;

- (id)resourceBundleURLForTemplate:(id)a0;
- (id)localizationBundleURLForTemplate:(id)a0;
- (id)stickerBundleURLForTemplate:(id)a0;
- (id)propertyListBundleURLForTemplate:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
