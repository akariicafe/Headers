@class NSString;

@interface WFPrivacyIssue : WFHealthIssue {
    NSString *_issueShortTitle;
    NSString *_issueTitle;
    NSString *_issueDescription;
    NSString *_issueRecommendation;
}

+ (id)carrierNetworkIssue;
+ (id)dnsFilteredNetworkIssue;
+ (id)privateAddressDisabledBySystemIssue;
+ (id)privateAddressDisabledByCarrierIssueWithCarrierName:(id)a0;
+ (id)privateAddressDisabledByProfileIssueWithOrganizationName:(id)a0 profileName:(id)a1 profileUUID:(id)a2;
+ (id)privateAddressDisabledByUserIssue;

- (void).cxx_destruct;
- (id)issueDescription;
- (id)issueShortTitle;
- (id)issueRecommendation;
- (id)issueTitle;
- (id)initWithPrivacyType:(unsigned long long)a0 organizationName:(id)a1 profileName:(id)a2 profileUUID:(id)a3;
- (id)_titleForSubType:(unsigned long long)a0;
- (id)_descriptionForSubType:(unsigned long long)a0 organizationName:(id)a1 profileName:(id)a2;
- (id)_recommendationForSubType:(unsigned long long)a0 organizationName:(id)a1;
- (unsigned long long)_healthIssueTypeForSubType:(unsigned long long)a0;

@end
