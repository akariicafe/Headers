@class NSString, NSMutableArray;

@interface TRIProjectOwner : TRIPBMessage

@property (nonatomic) int projectId;
@property (nonatomic) BOOL hasProjectId;
@property (copy, nonatomic) NSString *driEmail;
@property (nonatomic) BOOL hasDriEmail;
@property (copy, nonatomic) NSString *releaseManagerEmail;
@property (nonatomic) BOOL hasReleaseManagerEmail;
@property (nonatomic) unsigned int adirGroupId;
@property (nonatomic) BOOL hasAdirGroupId;
@property (copy, nonatomic) NSString *qaContact;
@property (nonatomic) BOOL hasQaContact;
@property (copy, nonatomic) NSString *radarComponent;
@property (nonatomic) BOOL hasRadarComponent;
@property (retain, nonatomic) NSMutableArray *privacyApprovalArray;
@property (readonly, nonatomic) unsigned long long privacyApprovalArray_Count;
@property (retain, nonatomic) NSMutableArray *securityApprovalArray;
@property (readonly, nonatomic) unsigned long long securityApprovalArray_Count;
@property (nonatomic) BOOL privacyApprovalRequired;
@property (nonatomic) BOOL hasPrivacyApprovalRequired;
@property (nonatomic) BOOL securityApprovalRequired;
@property (nonatomic) BOOL hasSecurityApprovalRequired;

+ (id)descriptor;

@end
