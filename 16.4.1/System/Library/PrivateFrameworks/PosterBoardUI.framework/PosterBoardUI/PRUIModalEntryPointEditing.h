@class PRSPosterConfiguration, NSString, PRMutablePosterConfiguration, PRSPosterUpdateSessionInfo, PRSServerPosterPath;

@interface PRUIModalEntryPointEditing : NSObject <PRUIModalEntryPoint> {
    PRSPosterConfiguration *_serviceConfiguration;
}

@property (readonly, nonatomic) long long editingType;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) PRMutablePosterConfiguration *configuration;
@property (readonly, nonatomic) PRSServerPosterPath *serverPosterPath;
@property (readonly, nonatomic) PRSPosterUpdateSessionInfo *updateSessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithExtensionIdentifier:(id)a0 configuration:(id)a1;
- (id)initWithServiceConfiguration:(id)a0;
- (id)initWithServiceConfiguration:(id)a0 updateSessionInfo:(id)a1;
- (id)initWithType:(long long)a0 extensionIdentifier:(id)a1 configuration:(id)a2 updateSessionInfo:(id)a3;

@end
