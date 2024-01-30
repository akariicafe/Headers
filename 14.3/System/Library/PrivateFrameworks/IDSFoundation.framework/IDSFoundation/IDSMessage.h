@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying>

@property (copy) NSNumber *wantsDeliveryStatus;
@property BOOL wantsCertifiedDelivery;
@property (copy) NSDictionary *deliveryStatusContext;
@property (copy) NSNumber *version;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (BOOL)_shouldUseJSONForEncoding;
- (id)_objectForKeyFromMadridBag:(id)a0;
- (id)_madridServerBag;
- (BOOL)wantsAPSRetries;
- (BOOL)wantsHTTPHeaders;
- (id)userAgentHeaderString;
- (BOOL)wantsUserAgentInHeaders;

@end
