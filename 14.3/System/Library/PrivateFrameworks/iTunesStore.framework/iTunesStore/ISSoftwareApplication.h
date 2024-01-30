@class NSString, NSArray, NSDate, NSNumber, SSItemContentRating;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
    unsigned long long _vppStateFlags;
}

@property (nonatomic) BOOL didCheckLaunchProhibited;
@property (readonly, nonatomic) NSDate *receiptExpirationDate;
@property (readonly, nonatomic) unsigned long long removableStatus;
@property (readonly, nonatomic) unsigned long long vppStateFlags;
@property (retain, nonatomic) NSNumber *accountDSID;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic, getter=isBeta) BOOL beta;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleShortVersionString;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *containerPath;
@property (copy, nonatomic) SSItemContentRating *contentRating;
@property (copy, nonatomic) NSString *deviceIdentifierForVendor;
@property (copy, nonatomic) NSNumber *familyAccountIdentifier;
@property (retain, nonatomic) NSNumber *itemIdentifier;
@property (copy, nonatomic) NSString *itemName;
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (nonatomic, getter=isProfileValidated) BOOL profileValidated;
@property (copy, nonatomic) NSString *softwareType;
@property (retain, nonatomic) NSNumber *storeFrontIdentifier;
@property (copy, nonatomic) NSString *vendorName;
@property (retain, nonatomic) NSNumber *versionIdentifier;
@property (copy, nonatomic) NSArray *versionOrdering;
@property (nonatomic) BOOL hasMIDBasedSINF;
@property (nonatomic) BOOL missingRequiredSINF;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithLaunchServicesApplication:(id)a0 containerPath:(id)a1;
- (void)_loadMetadataFromContainer:(id)a0;
- (id)initWithLaunchServicesApplication:(id)a0;
- (void)resetVPPStateFlags;
- (id)ITunesMetadataDictionary;

@end
