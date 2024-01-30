@class NSString, NSObject;
@protocol ACHTemplateSourceDelegate, ACHTemplateAssetSourceDelegate;

@interface ACHBuiltinTemplateSource : NSObject <ACHTemplateSource, ACHTemplateAssetSource>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACHTemplateAssetSourceDelegate> *assetSourceDelegate;

- (id)resourceBundleURLForTemplate:(id)a0;
- (BOOL)sourceShouldRunForDate:(id)a0;
- (void)templatesForDate:(id)a0 completion:(id /* block */)a1;
- (id)stickerBundleURLForTemplate:(id)a0;
- (id)localizationBundleURLForTemplate:(id)a0;
- (id)propertyListBundleURLForTemplate:(id)a0;

@end
