@class NSString, NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface SBSRemoteContentDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying>

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *viewControllerClassName;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithServiceName:(id)a0 viewControllerClassName:(id)a1 xpcEndpoint:(id)a2 userInfo:(id)a3;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithServiceName:(id)a0 viewControllerClassName:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
