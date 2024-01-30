@class NSSet, NSDictionary, NSString, NSObject;
@protocol OS_xpc_object;

@interface SBSRemoteAlertConfigurationContext : NSObject <BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *legacyAlertOptions;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint;
@property (copy, nonatomic) NSSet *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationContextWithLegacyAlertOptions:(id)a0;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
