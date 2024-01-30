@class NSSet, NSString;

@interface CEMSystemBasicWebContentFilterDeclaration_SiteWhiteListItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadAddress;
@property (copy, nonatomic) NSString *payloadBookmarkPath;
@property (copy, nonatomic) NSString *payloadPageTitle;

+ (id)buildWithAddress:(id)a0 withPageTitle:(id)a1;
+ (id)buildRequiredOnlyWithAddress:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
