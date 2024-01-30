@class NSString, NSData, STFamilyOrganization;

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject, STVersionVectorable>

@property (class, readonly) NSString *serializableClassName;

@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL shareWebUsage;
@property (retain, nonatomic) STFamilyOrganization *organization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *versionVector;
@property (nonatomic) BOOL isDirty;

- (void)setIsManaged:(BOOL)a0;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (id)redactedDescription;
- (void)didChangeValueForKey:(id)a0;
- (id)dictionaryRepresentation;
- (void)setPasscode:(id)a0;
- (id)computeUniqueIdentifier;

@end
