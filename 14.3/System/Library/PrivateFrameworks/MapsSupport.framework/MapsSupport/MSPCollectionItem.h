@class NSString, NSUUID;

@interface MSPCollectionItem : NSObject <MSPMutableObject, MSPImmutableObject> {
    NSUUID *_storageIdentifier;
}

@property (copy, nonatomic) NSString *itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)storageIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)transferToImmutableIfValidWithError:(out id *)a0;
- (id)copyIfValidWithError:(out id *)a0;

@end
