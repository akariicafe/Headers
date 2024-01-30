@class NSString;

@interface WFPrivacyIssue : WFHealthIssue {
    NSString *_issueShortTitle;
    NSString *_issueTitle;
    NSString *_issueDescription;
    NSString *_issueRecommendation;
    NSString *_typeString;
}

+ (id)carrierNetworkIssue;
+ (id)dnsFilteredNetworkIssue;
+ (id)privateAddressDisabledBySystemIssue;
+ (id)privateAddressDisabledByCarrierIssueWithCarrierName:(id)a0;
+ (id)privateAddressDisabledByProfileIssueWithOrganizationName:(id)a0 profileName:(id)a1 profileUUID:(id)a2;
+ (id)privateAddressDisabledByUserIssue;

- (id)typeString;
- (void).cxx_destruct;
- (id)issueDescription;
- (id)issueShortTitle;
- (id)issueRecommendation;
- (id)issueTitle;
- (id)_titleForSubType:(unsigned long long)a0;
- (id)initWithPrivacyType:(unsigned long long)a0 organizationName:(id)a1 profileName:(id)a2 profileUUID:(id)a3;
- (id)_descriptionForSubType:(unsigned long long)a0 organizationName:(id)a1 profileName:(id)a2;
- (id)_recommendationForSubType:(unsigned long long)a0 organizationName:(id)a1;
- (id)_privateAddressTypeToString:(unsigned long long)a0;
- (unsigned long long)_healthIssueTypeForSubType:(unsigned long long)a0;

@end
