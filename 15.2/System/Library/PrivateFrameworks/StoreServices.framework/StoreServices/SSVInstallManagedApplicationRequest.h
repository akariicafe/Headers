@class NSString, NSNumber;

@interface SSVInstallManagedApplicationRequest : SSRequest <SSXPCCoding>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic) BOOL skipDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (void)startWithResponseBlock:(id /* block */)a0;
- (void)startWithMetadataResponseBlock:(id /* block */)a0;
- (id)initWithItemIdentifer:(id)a0 externalVersionIdentifier:(id)a1 bundleIdentifier:(id)a2 bundleVersion:(id)a3;
- (id)initWithItemIdentifer:(id)a0 externalVersionIdentifier:(id)a1 bundleIdentifier:(id)a2 bundleVersion:(id)a3 skipDownloads:(BOOL)a4;
- (void)startWithDetailedResponseBlock:(id /* block */)a0;

@end
