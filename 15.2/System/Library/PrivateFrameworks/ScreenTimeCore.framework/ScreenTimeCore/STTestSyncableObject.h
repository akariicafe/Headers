@class NSString, NSSet;

@interface STTestSyncableObject : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (class, readonly) NSString *serializableClassName;

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *subobjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;

@end
