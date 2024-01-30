@class NSString, NSObject;
@protocol OS_xpc_object;

@interface BSServiceConnectionEndpoint : NSObject <NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding> {
    NSString *_targetDescription;
    BOOL _nonLaunching;
    NSString *_machName;
    NSObject<OS_xpc_object> *_endpoint;
}

@property (class, readonly, copy, nonatomic) NSString *defaultShellMachName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *targetDescription;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)endpointForMachName:(id)a0 service:(id)a1 instance:(id)a2;
+ (id)nullEndpointForService:(id)a0 instance:(id)a1;
+ (id)endpointForSystemMachName:(id)a0 service:(id)a1 instance:(id)a2;

- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isNullEndpoint;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)isEqualToServiceEndpoint:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
