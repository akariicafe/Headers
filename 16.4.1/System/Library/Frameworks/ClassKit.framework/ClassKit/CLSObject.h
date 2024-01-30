@class NSString, NSDateFormatter, CLSDataStore, NSDate, NSMutableDictionary;

@interface CLSObject : NSObject <CLSRelationable, CLSGraphVertex, NSLocking, NSSecureCoding> {
    BOOL _deleted;
    BOOL _modified;
    BOOL _enforceImmutability;
    CLSDataStore *_dataStore;
    NSString *_parentObjectID;
    NSString *_appIdentifier;
    CLSObject *_parent;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    BOOL _needsRepair;
}

@property (class, readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isTemporary) BOOL temporary;
@property unsigned int generation;
@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *parentObjectID;
@property (weak, nonatomic) CLSObject *parent;
@property (weak, nonatomic) CLSDataStore *dataStore;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic, getter=isModified) BOOL modified;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSDate *dateLastModified;
@property (retain, nonatomic) NSDate *dateExpires;
@property (nonatomic, getter=isImmutabilityEnforced) BOOL enforceImmutability;
@property (copy, nonatomic) NSMutableDictionary *childrenByID;
@property (readonly, nonatomic) id vertexID;

+ (id)relations;

- (void)encodeWithCoder:(id)a0;
- (void)lock;
- (id)initWithCoder:(id)a0;
- (void)unlock;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)identity;
- (void)addChild:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeChild:(id)a0;
- (void)setNeedsRepair:(BOOL)a0;
- (BOOL)needsRepair;
- (void)mergeWithObject:(id)a0;
- (id)childrenPassingTest:(id /* block */)a0;
- (void)_addChild:(id)a0;
- (void)_addChild:(id)a0 lock:(BOOL)a1;
- (void)removeFromParentWithoutDeleting;
- (BOOL)validateObject:(id *)a0;
- (void)addChild:(id)a0 changedPropertyName:(id)a1;
- (id)ancestorOfClass:(Class)a0;
- (id)childrenOfClass:(Class)a0;
- (void)didSaveObject;
- (long long)effectiveAuthorizationStatus;
- (void)enumerateChildren:(id /* block */)a0;
- (void)enumerateTree:(id /* block */)a0;
- (id)initWithDeletedObjectID:(id)a0;
- (void)removeChild:(id)a0 changedPropertyName:(id)a1;
- (id)removeChildWithoutDeleting:(id)a0;
- (void)willSaveObject;

@end
