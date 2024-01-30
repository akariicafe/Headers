@class NSString;

@interface NilAsset : NSObject <NLAsset>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (long long)getAssetType;
- (id)getAssetVersion;
- (id)getAssetMetadata;
- (id)getAssetPath;

@end
