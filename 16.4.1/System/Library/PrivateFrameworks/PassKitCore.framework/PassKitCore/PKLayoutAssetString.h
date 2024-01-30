@class NSString, NSDictionary, PKOSVersionRequirementRange;

@interface PKLayoutAssetString : NSObject <PKDynamicTemplateLayoutAsset>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *displayText;
@property (retain, nonatomic) NSString *markdownText;
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange;
@property (retain, nonatomic) NSDictionary *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetKey;
+ (id)nameToAssetsMapFromDictionaries:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
