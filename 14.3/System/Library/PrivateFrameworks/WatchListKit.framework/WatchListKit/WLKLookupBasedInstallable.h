@class AMSLookupItem, NSString, NSArray, NSURL;

@interface WLKLookupBasedInstallable : NSObject <WLKInstallable>

@property (readonly, nonatomic) AMSLookupItem *item;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *appBundleIDs;
@property (readonly, copy, nonatomic) NSArray *appAdamIDs;
@property (readonly, copy, nonatomic) NSURL *appStoreURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
