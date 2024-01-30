@class NSString, STiCloudOrganizationSettings;

@interface STiCloudOrganization : STCoreOrganization <STSerializableMappedObject>

@property (class, readonly) NSString *serializableClassName;

@property (copy, nonatomic) STiCloudOrganizationSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchOrCreateiCloudOrganizationWithContext:(id)a0 error:(id *)a1;


@end
