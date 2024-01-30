@class NSString, SIRINLUEXTERNALUUID, NSUUID;

@interface SiriNLUSELFRequestLinkData : NSObject

@property (retain) SIRINLUEXTERNALUUID *nlId;
@property (retain) NSString *resultCandidateId;
@property unsigned long long splitCount;
@property (retain) NSString *targetName;
@property (retain) NSUUID *targetUUID;

- (void).cxx_destruct;

@end
