@class NSSet;

@interface WBSPasswordAuditingEligibleDomainsManager : NSObject

@property (copy) NSSet *domainsIneligibleForPasswordAuditing;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDomainsIneligibleForPasswordAuditing:(id)a0;

@end
