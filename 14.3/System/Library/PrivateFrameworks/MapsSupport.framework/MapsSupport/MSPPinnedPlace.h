@class NSString, NSUUID;

@interface MSPPinnedPlace : MSPPinnedPlaceStorage <MSPMutableObject, MSPImmutableObject> {
    NSUUID *_storageIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)uuidForIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)storageIdentifier;
- (id)initWithData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 storageIdentifier:(id)a1;
- (id)transferToImmutableIfValidWithError:(out id *)a0;
- (id)copyIfValidWithError:(out id *)a0;
- (id)initWithStorageIdentifier:(id)a0;

@end
