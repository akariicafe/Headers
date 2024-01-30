@class NSArray, NSDictionary, RBEntitlementPredicate, NSString, RBDomainRestriction;

@interface RBDomainAttributeTemplate : NSObject <RBAttributeTemplateConfiguring> {
    NSString *_domain;
    NSString *_name;
    NSString *_endowmentNamespace;
}

@property (retain, nonatomic) NSArray *attributeGroups;
@property (copy, nonatomic) RBEntitlementPredicate *originatorEntitlements;
@property (copy, nonatomic) NSDictionary *targetBundleProperties;
@property (copy, nonatomic) RBEntitlementPredicate *targetEntitlements;
@property (copy, nonatomic) NSDictionary *additionalRestrictions;
@property (copy, nonatomic) RBDomainRestriction *restriction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
