@class NSMutableDictionary, NSMutableOrderedSet;

@interface REMReplicaManager : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (nonatomic) BOOL isPersistable;
@property (retain, nonatomic) NSMutableOrderedSet *replicaUUIDs;
@property (retain, nonatomic) NSMutableDictionary *replicaEntries;
@property (nonatomic) unsigned long long currentVersion;
@property (nonatomic) unsigned long long maxLastSavedVersion;
@property (nonatomic) BOOL exceededMaxSerializedSize;

+ (BOOL)supportsSecureCoding;
+ (BOOL)disablesInMemoryOnlyCheck;
+ (BOOL)shouldUseNewInMemoryOnlyReplicaManager;
+ (id)replicaManagerWithSerializedData:(id)a0 error:(id *)a1;
+ (id)replicaManagerForAccountID:(id)a0 store:(id)a1;
+ (void)setDisablesInMemoryOnlyCheck:(BOOL)a0;
+ (id)replicaManagerIfLoadedForAccountID:(id)a0;
+ (void)setReplicaManager:(id)a0 forAccountID:(id)a1;
+ (id)unsavedReplicaManagersForAccountIDs:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (id)persistenceDescription;
- (id)l_checkoutReplicaUUIDForClient:(id)a0;
- (void)performLocked:(id /* block */)a0;
- (BOOL)l_updateVersionOfEntry:(id)a0 forClient:(id)a1;
- (void)modifyReplicaEntryForClient:(id)a0 block:(id /* block */)a1;
- (id)l_replicaUUIDsDescription;
- (id)l_replicaEntriesDescriptionForPersistence:(BOOL)a0;
- (id)initWithArchive:(const struct ReplicaManager { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x5; struct RepeatedPtrField<replica_manager::ReplicaEntry> { void **x0; int x1; int x2; int x3; } x6; } *)a0 error:(id *)a1;
- (void)encodeIntoArchive:(struct ReplicaManager { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x5; struct RepeatedPtrField<replica_manager::ReplicaEntry> { void **x0; int x1; int x2; int x3; } x6; } *)a0;
- (id)l_serializedDataWithError:(id *)a0;
- (id)checkoutReplicaUUIDForClient:(id)a0;
- (void)updateVersionForClient:(id)a0;
- (void)returnReplicaForClient:(id)a0;
- (id)serializedDataCappedAtMaxSize:(BOOL)a0 error:(id *)a1;
- (void)didSaveVersion:(unsigned long long)a0;
- (unsigned long long)replicaEntryCount;
- (id)availabilityOfFirstReplicaForCRDTID:(id)a0;
- (id)clockOfFirstReplicaForCRDTID:(id)a0;
- (BOOL)hasEqualPersistedEntriesAs:(id)a0;
- (void)addRandomReplicaEntriesWithCount:(long long)a0;
- (id)description;
- (BOOL)hasUnsavedChanges;

@end
