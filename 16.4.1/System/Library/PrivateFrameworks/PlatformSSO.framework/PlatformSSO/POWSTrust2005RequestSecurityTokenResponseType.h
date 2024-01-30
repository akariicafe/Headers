@class POWSTrustRequestedSecurityTokenType, NSString, POWSTrustAppliesToType, POWSTrustTimestampType, POWSTrustReferenceType;

@interface POWSTrust2005RequestSecurityTokenResponseType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustRequestedSecurityTokenType *RequestedSecurityToken;
@property (retain, nonatomic) POWSTrustTimestampType *Lifetime;
@property (retain, nonatomic) POWSTrustAppliesToType *AppliesTo;
@property (retain, nonatomic) POWSTrustReferenceType *RequestedAttachedReference;
@property (retain, nonatomic) POWSTrustReferenceType *RequestedUnattachedReference;
@property (copy, nonatomic) NSString *TokenType;
@property (copy, nonatomic) NSString *RequestType;
@property (copy, nonatomic) NSString *KeyType;

+ (id)definition;

- (id)description;
- (void).cxx_destruct;

@end
