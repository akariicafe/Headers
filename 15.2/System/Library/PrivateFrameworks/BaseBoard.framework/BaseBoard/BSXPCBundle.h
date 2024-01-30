@class NSString, NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface BSXPCBundle : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, copy, nonatomic) NSDictionary *infoDictionary;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainBundle;
+ (id)bundleWithPath:(id)a0;
+ (id)bundleForPID:(int)a0;
+ (id)bundleWithXPCBundle:(id)a0;
+ (id)bundleWithExecutablePath:(id)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
