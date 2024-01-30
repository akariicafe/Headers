@class NSString, NSURL;

@interface LSMIPackageInstallCall : NSObject <LSMIInstallCall> {
    NSString *_bundleID;
    NSURL *_packageURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 packageURL:(id)a1;
- (id)invokeWithOptions:(id)a0 error:(id *)a1 progressCallback:(id /* block */)a2;
- (BOOL)isUninstall;
- (BOOL)validateEntitlementsOfConnection:(id)a0 withOptions:(id)a1 error:(id *)a2;

@end
