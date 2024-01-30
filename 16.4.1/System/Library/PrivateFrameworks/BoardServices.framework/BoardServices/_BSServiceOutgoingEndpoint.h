@class NSString, NSObject;
@protocol OS_xpc_object;

@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_endpoint;
    NSString *_eDesc;
    int _targetPID;
    unsigned int _invalidationGeneration;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
