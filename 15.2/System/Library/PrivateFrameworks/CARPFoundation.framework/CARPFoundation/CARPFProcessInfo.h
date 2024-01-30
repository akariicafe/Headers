@class NSString, NSBundle, NSURL, CARPFBoolean;

@interface CARPFProcessInfo : CARPFObject <CARPFLogging> {
    struct { unsigned int x0[8]; } *_auditToken;
    NSString *_applicationIdentifier;
}

@property (class, readonly) CARPFProcessInfo *processInfo;

@property (readonly, copy) NSString *applicationIdentifier;
@property (readonly, copy, getter=isCodeSigned) CARPFBoolean *codeSigned;
@property (readonly, copy, getter=isPlatformBinary) CARPFBoolean *platformBinary;
@property (readonly) int identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSURL *executableURL;
@property (readonly, copy) NSURL *mainBundleURL;
@property (readonly, copy) NSBundle *mainBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)processInfoForXPCConnection:(id)a0;
+ (id)logCategory;

- (id)initWithIdentifier:(int)a0;
- (BOOL)getAuditToken:(struct { unsigned int x0[8]; } *)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (id)valueForEntitlement:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;
- (id)carpf_shortDescription;

@end
