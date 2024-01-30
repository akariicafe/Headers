@class NSString, NSObject;
@protocol OS_xpc_object;

@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_endpoint;
    NSString *_eDesc;
    unsigned int _invalidationGeneration;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
