@class POWSTrustEndpointReferenceType;

@interface POWSTrustAppliesToType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustEndpointReferenceType *EndpointReference;

+ (id)definition;

- (id)description;
- (void).cxx_destruct;

@end
