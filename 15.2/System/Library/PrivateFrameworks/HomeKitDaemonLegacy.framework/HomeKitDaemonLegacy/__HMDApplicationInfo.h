@class NSData;

@interface __HMDApplicationInfo : __HMDBundleApplicationInfo {
    BOOL _installed;
    NSData *_vendorIdentifier;
}

- (id)initWithRecord:(id)a0;
- (BOOL)isInstalled;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)vendorIdentifier;

@end
