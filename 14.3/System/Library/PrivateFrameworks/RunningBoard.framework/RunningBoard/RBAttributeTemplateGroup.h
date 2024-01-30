@class NSArray, NSDictionary, RBEntitlementPredicate;

@interface RBAttributeTemplateGroup : NSObject {
    RBEntitlementPredicate *_originatorEntitlements;
    RBEntitlementPredicate *_targetEntitlements;
    NSDictionary *_additionalRestrictions;
}

@property (retain, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSDictionary *targetBundleProperties;

- (void).cxx_destruct;
- (id)description;

@end
