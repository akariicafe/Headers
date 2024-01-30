@class HMDApplicationInfo;

@interface __HMDExtensionApplicationInfo : __HMDBundleApplicationInfo {
    HMDApplicationInfo *_hostApplicationInfo;
}

- (id)initWithRecord:(id)a0;
- (BOOL)isInstalled;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)vendorIdentifier;
- (id)hostApplicationInfo;

@end
