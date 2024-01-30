@class NSString;

@interface SUScriptCarrierBundlingController : SUScriptObject

@property (readonly) NSString *provisioningStyleAlways;
@property (readonly) NSString *provisioningStyleNever;
@property (readonly) NSString *provisioningStyleOnce;
@property (readonly) NSString *statusEligible;
@property (readonly) NSString *statusNeedsManualVerification;
@property (readonly) NSString *statusNotEligible;
@property (readonly) NSString *statusUnknown;
@property (readonly) NSString *statusUnlinked;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)updateLastKnownStatus:(id)a0;

@end
