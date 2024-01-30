@class POWSTrustSecurityTokenReferenceType;

@interface POWSTrustReferenceType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustSecurityTokenReferenceType *SecurityTokenReference;

+ (id)definition;

- (id)description;
- (void).cxx_destruct;

@end
