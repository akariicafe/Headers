@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SUCorePersistedState : NSObject

@property (retain, nonatomic) NSMutableDictionary *persistedState;
@property (retain, nonatomic) NSString *persistencePath;
@property (retain, nonatomic) NSString *versionPolicyLayer;
@property (retain, nonatomic) NSString *versionSUCore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *persistedStateQueue;

- (id)summary;
- (void).cxx_destruct;
- (id)stringForKey:(id)a0;
- (id)dateForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (id)description;
- (id)dictionaryForKey:(id)a0;
- (void)persistObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (BOOL)booleanForKey:(id)a0;
- (id)initWithDispatchQueue:(id)a0 withPersistencePath:(id)a1 forPolicyVersion:(id)a2;
- (BOOL)loadPersistedState;
- (void)persistDictionary:(id)a0 forKey:(id)a1;
- (id)_createEmptyPersistedState;
- (BOOL)booleanForKey:(id)a0 forType:(int)a1;
- (id)_keyNameForPersistedStateType:(int)a0;
- (unsigned long long)ullForKey:(id)a0 forType:(int)a1;
- (id)stringForKey:(id)a0 forType:(int)a1;
- (id)dictionaryForKey:(id)a0 forType:(int)a1;
- (id)dataForKey:(id)a0 forType:(int)a1;
- (id)dateForKey:(id)a0 forType:(int)a1;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 forType:(int)a2;
- (id)secureCodedObjectForKey:(id)a0 ofClass:(Class)a1 encodeClasses:(id)a2 forType:(int)a3;
- (void)persistBoolean:(BOOL)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistBoolean:(BOOL)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (void)_writePersistedState;
- (void)persistULL:(unsigned long long)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistULL:(unsigned long long)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (void)persistString:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistString:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (void)persistDictionary:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistDictionary:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (void)persistData:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistData:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (void)persistDate:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistDate:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (void)persistObject:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistObject:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (void)persistSecureCodedObject:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistSecureCodedObject:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (BOOL)isPersistedStateLoaded;
- (id)persistedContentsType;
- (id)persistedCoreVersion;
- (id)persistedPolicyVersion;
- (void)removePersistedState;
- (unsigned long long)ullForKey:(id)a0;
- (id)secureCodedObjectForKey:(id)a0 ofClass:(Class)a1;
- (id)secureCodedObjectForKey:(id)a0 ofClass:(Class)a1 encodeClasses:(id)a2;
- (id)secureCodedObjectForKey:(id)a0 ofClass:(Class)a1 forType:(int)a2;
- (void)persistBoolean:(BOOL)a0 forKey:(id)a1;
- (void)persistULL:(unsigned long long)a0 forKey:(id)a1;
- (void)persistString:(id)a0 forKey:(id)a1;
- (void)persistData:(id)a0 forKey:(id)a1;
- (void)persistDate:(id)a0 forKey:(id)a1;
- (void)persistSecureCodedObject:(id)a0 forKey:(id)a1;
- (void)persistState;

@end
