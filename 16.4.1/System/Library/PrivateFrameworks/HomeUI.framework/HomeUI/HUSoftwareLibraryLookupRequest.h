@class NSString, HMAccessory;

@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *storeID;
@property (readonly, nonatomic) HMAccessory *accessory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (id)initWithBundleID:(id)a0 storeID:(id)a1;

@end
