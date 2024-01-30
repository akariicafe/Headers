@class NSData;

@interface __HMDApplicationInfo : __HMDBundleApplicationInfo {
    BOOL _installed;
    NSData *_vendorIdentifier;
}

- (BOOL)isInstalled;
- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)vendorIdentifier;

@end
