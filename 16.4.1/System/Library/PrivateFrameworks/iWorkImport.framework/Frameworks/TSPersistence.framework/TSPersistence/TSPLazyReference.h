@class Protocol, NSUUID, TSPObject, TSPComponent, NSString;
@protocol TSPLazyReferenceDelegate;

@interface TSPLazyReference : NSObject <TSPReferenceItem, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _objectLock;
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    _Atomic unsigned char _flags;
}

@property (weak, nonatomic) id<TSPLazyReferenceDelegate> delegate;
@property (readonly, nonatomic) NSUUID *objectUUID;
@property (weak, nonatomic) TSPComponent *component;
@property (readonly, nonatomic) TSPObject *weakObject;
@property (readonly, nonatomic) TSPObject *strongObject;
@property (readonly, nonatomic) long long ownershipMode;
@property (readonly, nonatomic) BOOL allowUnknownObject;
@property (nonatomic) BOOL isExternal;
@property (nonatomic) Class objectClass;
@property (retain, nonatomic) Protocol *objectProtocol;
@property (readonly, nonatomic) id objectIfLoaded;
@property (nonatomic) BOOL keepObjectInMemory;
@property (readonly, nonatomic) long long tsp_identifier;
@property (readonly, nonatomic) BOOL tsp_isLazyReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referenceForObject:(id)a0;
+ (id)weakReferenceForObject:(id)a0;
+ (id)weakReferenceForObject:(id)a0 retainedUntilArchived:(BOOL)a1;

- (id)initWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)additionalDescription;
- (BOOL)isEqualToLazyReference:(id)a0;
- (BOOL)referencesObject:(id)a0;
- (void)retainObject:(id)a0;
- (void)addLoadObserver:(id)a0 action:(SEL)a1;
- (id)initWeakReferenceWithObject:(id)a0;
- (id)objectAndReturnError:(id *)a0;
- (id)initWeakReferenceWithObject:(id)a0 retainedUntilArchived:(BOOL)a1;
- (id)initWithDelegate:(id)a0 identifier:(long long)a1 ownershipMode:(long long)a2 allowUnknownObject:(BOOL)a3 objectClass:(Class)a4 objectProtocol:(id)a5;
- (id)initWithObject:(id)a0 ownershipMode:(long long)a1;
- (long long)releaseObjectIfPossible;
- (void)resetIdentifierFromCopy:(BOOL)a0;
- (void)resetToIdentifier:(long long)a0;
- (BOOL)validateObject:(id)a0 expectedObjectClass:(Class)a1 expectedObjectProtocol:(id)a2 delegate:(id)a3 shouldIgnoreFailure:(BOOL *)a4 shouldUpdateObjectClass:(BOOL *)a5 error:(id *)a6;

@end
