@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying>

@property (copy) NSNumber *wantsDeliveryStatus;
@property BOOL wantsCertifiedDelivery;
@property (copy) NSDictionary *deliveryStatusContext;
@property (copy) NSNumber *version;

- (BOOL)wantsUserAgentInHeaders;
- (BOOL)wantsAPSRetries;
- (BOOL)wantsHTTPHeaders;
- (id)userAgentHeaderString;
- (BOOL)_shouldUseJSONForEncoding;
- (id)_madridServerBag;
- (id)_objectForKeyFromMadridBag:(id)a0;
- (id)messageBody;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
