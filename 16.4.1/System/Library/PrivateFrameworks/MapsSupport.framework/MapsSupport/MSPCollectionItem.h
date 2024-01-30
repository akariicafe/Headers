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
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableObjectProtocol;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)storageIdentifier;
- (id)copyIfValidWithError:(out id *)a0;
- (id)transferToImmutableIfValidWithError:(out id *)a0;

@end
