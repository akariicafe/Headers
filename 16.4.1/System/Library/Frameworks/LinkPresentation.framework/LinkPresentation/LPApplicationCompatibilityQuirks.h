@interface LPApplicationCompatibilityQuirks : NSObject

+ (BOOL)needsFreshWKUserContentController;
+ (BOOL)supportsLPLinkViewAutolayout;

@end
