@class NSString, CKEntitlements;

@interface CKDApplicationMetadata : NSObject

@property (nonatomic) long long adopterProcessType;
@property (retain, nonatomic) NSString *containingBundleID;
@property (retain, nonatomic) NSString *applicationContainerPath;
@property (retain, nonatomic) CKEntitlements *entitlements;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic) BOOL isClientMainBundleAppleExecutable;

- (void).cxx_destruct;
- (id)init;

@end
