@class NSString, NSBundle, NSURL, HMFBoolean;

@interface HMFProcessInfo : HMFObject <HMFLogging> {
    struct { unsigned int x0[8]; } *_auditToken;
}

@property (class, readonly) HMFProcessInfo *processInfo;

@property (readonly) int identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSURL *executableURL;
@property (readonly, copy) NSURL *mainBundleURL;
@property (readonly, copy) NSBundle *mainBundle;
@property (readonly, copy) NSString *applicationIdentifier;
@property (readonly, copy) NSString *signingIdentifier;
@property (readonly, copy, getter=isCodeSigned) HMFBoolean *codeSigned;
@property (readonly, copy, getter=isPlatformBinary) HMFBoolean *platformBinary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)processInfoForXPCConnection:(id)a0;
+ (id)logCategory;

- (id)logIdentifier;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithIdentifier:(int)a0;
- (id)shortDescription;
- (BOOL)getAuditToken:(struct { unsigned int x0[8]; } *)a0;
- (void)dealloc;
- (id)valueForEntitlement:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)attributeDescriptions;
- (void).cxx_destruct;

@end
