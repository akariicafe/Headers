@class HMDApplicationInfo;

@interface __HMDExtensionApplicationInfo : __HMDBundleApplicationInfo {
    HMDApplicationInfo *_hostApplicationInfo;
}

- (BOOL)isInstalled;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)vendorIdentifier;
- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)hostApplicationInfo;

@end
