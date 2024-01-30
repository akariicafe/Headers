@class NSString, NSFileProviderItemVersion, NSFileProviderDomainVersion;
@protocol NSFileProviderItem;

@interface FPTestingModification : FPTestingOperation <NSFileProviderTestingModification>

@property (readonly, nonatomic) long long rawFields;
@property (readonly, nonatomic) long long snapshotVersion;
@property (readonly, nonatomic) unsigned long long targetSide;
@property (readonly, nonatomic) id<NSFileProviderItem> sourceItem;
@property (readonly, nonatomic) NSString *targetItemIdentifier;
@property (readonly, nonatomic) NSFileProviderItemVersion *targetItemBaseVersion;
@property (readonly, nonatomic) unsigned long long changedFields;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)asModification;
- (id)initWithOperationIdentifier:(id)a0 sourceItem:(id)a1 targetItemIdentifier:(id)a2 targetItemBaseVersion:(id)a3 changedFields:(unsigned long long)a4 domainVersion:(id)a5 rawFields:(long long)a6 snapshotVersion:(long long)a7;

@end
