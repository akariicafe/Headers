@class NSArray, NSString, RBEntitlementPredicate, NSDictionary;

@interface RBDomainAttributeTemplate : NSObject {
    NSString *_domain;
    NSString *_name;
    RBEntitlementPredicate *_originatorEntitlements;
    NSDictionary *_targetBundleProperties;
    RBEntitlementPredicate *_targetEntitlements;
    NSDictionary *_additionalRestrictions;
    NSString *_endowmentNamespace;
}

@property (retain, nonatomic) NSArray *attributeGroups;

- (void).cxx_destruct;
- (id)description;

@end
