@class NSString, NSDictionary;

@interface TrialAsset : NSObject <NLAsset> {
    NSString *_namespaceName;
    NSString *_factorName;
    NSString *_path;
    NSDictionary *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)getAssetType;
- (id)getAssetPath;
- (void)appendPathWithServiceAssetFolder:(id)a0;
- (id)getFactorName;
- (id)getNamespaceName;
- (id)getAssetVersion;
- (id)getAssetLocale;
- (id)initForFactor:(id)a0 inNamespace:(id)a1 withPath:(id)a2 withMetadata:(id)a3;

@end
