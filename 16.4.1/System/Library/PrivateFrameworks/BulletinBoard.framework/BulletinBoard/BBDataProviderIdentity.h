@class BBSectionIcon, NSString, NSArray, BBSectionParameters, NSDictionary, BBSectionInfo;

@interface BBDataProviderIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { unsigned char pushDataProvider : 1; unsigned char dataProviderDidLoad : 1; unsigned char bulletinsWithRequestParameters : 1; unsigned char bulletinsFilteredByDEPRECATED : 1; unsigned char bulletinsFilteredByEnabledSectionsDEPRECATED : 1; unsigned char clearedInfoForBulletins : 1; unsigned char clearedInfoAndBulletinsForClearingAllBulletins : 1; unsigned char clearedInfoAndBulletinsForClearingBulletinsByDate : 1; unsigned char clearedInfoForBulletinsDEPRECATED : 1; unsigned char defaultSectionInfo : 1; unsigned char defaultSubsectionInfos : 1; unsigned char displayNameForSubsectionID : 1; unsigned char sectionParameters : 1; unsigned char migrateSectionInfo : 1; unsigned char sectionDisplayName : 1; unsigned char sectionIcon : 1; unsigned char sectionIconDataDEPRECATED : 1; unsigned char receiveMessageWithName : 1; unsigned char noteSectionInfoDidChange : 1; unsigned char syncBulletinDismissal : 1; unsigned char handleBulletinActionResponse : 1; unsigned char handleBulletinActionResponseWithCompletion : 1; unsigned char universalSectionIdentifier : 1; unsigned char parentSectionIdentifier : 1; unsigned char sectionBundlePath : 1; } traits;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *universalSectionIdentifier;
@property (copy, nonatomic) BBSectionInfo *defaultSectionInfo;
@property (copy, nonatomic) NSString *sectionDisplayName;
@property (copy, nonatomic) BBSectionIcon *sectionIcon;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) BBSectionParameters *sectionParameters;
@property (copy, nonatomic) NSArray *defaultSubsectionInfos;
@property (copy, nonatomic) NSString *sortKey;
@property (copy, nonatomic) NSDictionary *subsectionDisplayNames;
@property (readonly, nonatomic) BOOL syncsBulletinDismissal;
@property (copy, nonatomic) NSString *parentSectionIdentifier;
@property (copy, nonatomic) NSDictionary *filterDisplayNames;
@property (copy, nonatomic) NSString *sectionBundlePath;

+ (id)identityForRemoteDataProvider:(id)a0;
+ (id)identityForDataProvider:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initForDataProvider:(id)a0 forRemoteDataProvider:(BOOL)a1;
- (void).cxx_destruct;

@end
