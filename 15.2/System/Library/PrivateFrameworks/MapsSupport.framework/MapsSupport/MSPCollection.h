@class NSArray, NSString, MSPCollectionItemReplica, NSUUID, NSLock;

@interface MSPCollection : MSPCollectionStorage <MSPMutableObject, MSPImmutableObject> {
    NSLock *_lock;
    NSUUID *_storageIdentifier;
}

@property (retain, nonatomic) MSPCollectionItemReplica *itemReplica;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL isFavoritesCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;

- (void)addItem:(id)a0;
- (void)addItems:(id)a0;
- (void)removeItem:(id)a0;
- (id)initWithData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setImageURL:(id)a0;
- (void)setTitle:(id)a0;
- (void)setImage:(id)a0;
- (id)storageIdentifier;
- (void)removeItems:(id)a0;
- (void)setCollectionDescription:(id)a0;
- (id)initWithData:(id)a0 storageIdentifier:(id)a1;
- (void)mergeFromCollection:(id)a0 isUserVisibleChange:(out BOOL *)a1;
- (id)transferToImmutableIfValidWithError:(out id *)a0;
- (id)copyIfValidWithError:(out id *)a0;
- (void)_noteWillMutate;

@end
