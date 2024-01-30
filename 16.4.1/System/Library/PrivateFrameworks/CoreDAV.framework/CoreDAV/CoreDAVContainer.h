@class NSString, CoreDAVResourceTypeItem, NSURL, CoreDAVSupportedReportSetItem, NSSet, NSDictionary;

@interface CoreDAVContainer : NSObject

@property (retain, nonatomic) CoreDAVSupportedReportSetItem *supportedReportSetItem;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL isUnauthenticated;
@property (retain, nonatomic) CoreDAVResourceTypeItem *resourceType;
@property (retain, nonatomic) NSString *containerTitle;
@property (retain, nonatomic) NSSet *privileges;
@property (retain, nonatomic) NSString *pushKey;
@property (retain, nonatomic) NSDictionary *pushTransports;
@property (retain, nonatomic) NSURL *resourceID;
@property (retain, nonatomic) NSString *quotaAvailable;
@property (retain, nonatomic) NSString *quotaUsed;
@property (readonly, nonatomic) NSSet *supportedReports;
@property (retain, nonatomic) NSURL *owner;
@property (retain, nonatomic) NSURL *addMemberURL;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (retain, nonatomic) NSString *syncToken;
@property (readonly, nonatomic) NSSet *resourceTypeAsStringSet;
@property (readonly, nonatomic) BOOL isPrincipal;
@property (readonly, nonatomic) NSSet *privilegesAsStringSet;
@property (readonly, nonatomic) BOOL hasReadPrivileges;
@property (readonly, nonatomic) BOOL hasWriteContentPrivileges;
@property (readonly, nonatomic) BOOL hasWritePropertiesPrivileges;
@property (readonly, nonatomic) BOOL hasBindPrivileges;
@property (readonly, nonatomic) BOOL hasUnbindPrivileges;
@property (readonly, nonatomic) NSSet *supportedReportsAsStringSet;
@property (readonly, nonatomic) BOOL supportsPrincipalPropertySearchReport;
@property (readonly, nonatomic) BOOL supportsSyncCollectionReport;

+ (id)copyPropertyMappingsForParser;
+ (id)convertPushTransportsForNSServerNotificationCenter:(id)a0;

- (BOOL)_anyPrivilegesMatches:(id /* block */)a0;
- (void)applyParsedProperties:(id)a0;
- (void)postProcessWithResponseHeaders:(id)a0;
- (id)initWithURL:(id)a0 andProperties:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
