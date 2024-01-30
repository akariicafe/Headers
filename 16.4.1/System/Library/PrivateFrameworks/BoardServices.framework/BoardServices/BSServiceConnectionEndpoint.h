@class NSString, NSObject;
@protocol OS_xpc_object;

@interface BSServiceConnectionEndpoint : NSObject <NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding> {
    NSString *_targetDescription;
    int _targetPID;
    NSObject<OS_xpc_object> *_endpoint;
}

@property (class, readonly, copy, nonatomic) NSString *defaultShellMachName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isNonLaunching) BOOL nonLaunching;
@property (readonly, copy, nonatomic) NSString *targetDescription;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)nullEndpointForService:(id)a0 instance:(id)a1;
+ (id)endpointForMachName:(id)a0 service:(id)a1 instance:(id)a2;
+ (id)endpointForSystemMachName:(id)a0 service:(id)a1 instance:(id)a2;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)isEqualToServiceEndpoint:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isNullEndpoint;
- (BOOL)isEqual:(id)a0;
- (void)saveAsInjectorEndowmentForKey:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
