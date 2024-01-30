@interface CNEmailAddressUtilities : NSObject

+ (BOOL)isStringEmailAddress:(id)a0;
+ (id)expandAliasedDomainsInAddress:(id)a0;
+ (id)aliasedDomains;
+ (id)makeEmailRegex;
+ (id)safeUserVisibleEmailAddress:(id)a0;

@end
