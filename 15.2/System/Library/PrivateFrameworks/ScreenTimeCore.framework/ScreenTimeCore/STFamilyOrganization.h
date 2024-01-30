@class NSString, NSSet;

@interface STFamilyOrganization : STCoreOrganization <STSerializableMappedObject>

@property (class, readonly) NSString *serializableClassName;

@property (retain, nonatomic) NSSet *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchOrCreateFamilyOrganizationWithContext:(id)a0 error:(id *)a1;


@end
