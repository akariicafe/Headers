@class NSString, MAAsset, NSDictionary, NSURL;

@interface DDSAsset : NSObject

@property (retain, nonatomic) MAAsset *maAsset;
@property (retain, nonatomic) NSString *debuggingID;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) unsigned long long compatibilityVersion;
@property (readonly, nonatomic) unsigned long long contentVersion;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) unsigned long long assetState;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *dataType;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *installDate;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *assetUUID;

+ (id)asset;
+ (id)uniqueIdentifierForMAAsset:(id)a0;
+ (id)assetWithMAAsset:(id)a0;
+ (id)debuggingIDsForAssets:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAsset:(id)a0;
- (void)_mergeAttributes:(id)a0;

@end
