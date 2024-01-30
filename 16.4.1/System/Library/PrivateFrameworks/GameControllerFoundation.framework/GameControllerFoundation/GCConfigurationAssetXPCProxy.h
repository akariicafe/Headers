@class NSString, GCVersion;

@interface GCConfigurationAssetXPCProxy : NSObject <GCConfigurationAsset, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *assetId;
@property (readonly) NSString *assetState;
@property (readonly) GCVersion *compatibilityVersion;
@property (readonly) GCVersion *contentVersion;
@property (readonly) long long contentRevision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
