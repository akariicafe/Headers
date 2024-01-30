@class NSString;

@interface LSMIUninstallCall : NSObject <LSMIUninstallCall> {
    NSString *_bundleID;
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
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)invokeWithOptions:(id)a0 error:(id *)a1 progressCallback:(id /* block */)a2;
- (BOOL)isUninstall;
- (BOOL)validateEntitlementsOfConnection:(id)a0 withOptions:(id)a1 error:(id *)a2;

@end
