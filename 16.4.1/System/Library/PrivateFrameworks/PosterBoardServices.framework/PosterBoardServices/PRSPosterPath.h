@class PRSServerPosterIdentity, NSString, BSAuditToken, NSURL, NSHashTable;

@interface PRSPosterPath : NSObject <BSInvalidatable, BSXPCSecureCoding, NSSecureCoding> {
    NSHashTable *_lock_allExtensions;
    NSURL *_sandboxExtensionURL;
    BSAuditToken *_sandboxExtensionAuditToken;
    long long _lock_sandboxExtensionHandle;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _options;
    unsigned char _lock_validityExtensions;
    unsigned char _lock_validityExtensionsHigh;
    BOOL _lock_invalidated;
    BOOL _lock_purged;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PRSServerPosterIdentity *serverIdentity;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSURL *containerURL;
@property (readonly, copy, nonatomic) NSURL *contentsURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)debugDescription;
+ (void)_setDisableUniquing:(BOOL)a0;
+ (id)temporaryDescriptorPathWithIdentifier:(id)a0;
+ (id)temporaryPath;

- (BOOL)storeUserInfo:(id)a0 error:(out id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)loadGalleryOptionsWithError:(out id *)a0;
- (id)loadUserInfoWithError:(out id *)a0;
- (BOOL)storeGalleryOptions:(id)a0 error:(out id *)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)isServerPosterPath;
- (id)extendContentsReadAccessToAuditToken:(id)a0 error:(out id *)a1;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)dealloc;
- (id)containerURL;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)ensureContentsURLIsReachableAndReturnError:(out id *)a0;
- (id)extendValidityForReason:(id)a0;
- (long long)compareDescriptorIdentifiers:(id)a0;

@end
