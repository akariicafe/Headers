@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SUCorePersistedState : NSObject

@property (retain, nonatomic) NSMutableDictionary *persistedState;
@property (retain, nonatomic) NSString *persistencePath;
@property (retain, nonatomic) NSString *versionPolicyLayer;
@property (retain, nonatomic) NSString *versionSUCore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *persistedStateQueue;

- (id)dataForKey:(id)a0;
- (void)persistULL:(unsigned long long)a0 forKey:(id)a1;
- (void)persistString:(id)a0 forKey:(id)a1;
- (void)persistBoolean:(BOOL)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (BOOL)booleanForKey:(id)a0;
- (id)summary;
- (id)persistedPolicyVersion;
- (void)persistDictionary:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)removePersistedState;
- (void)_writePersistedState;
- (id)persistedCoreVersion;
- (void)persistData:(id)a0 forKey:(id)a1;
- (void)persistObject:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (id)dictionaryForKey:(id)a0;
- (void)persistDate:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (void)persistBoolean:(BOOL)a0 forKey:(id)a1;
- (id)dictionaryForKey:(id)a0 forType:(int)a1;
- (void)persistSecureCodedObject:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (BOOL)booleanForKey:(id)a0 forType:(int)a1;
- (unsigned long long)ullForKey:(id)a0;
- (unsigned long long)ullForKey:(id)a0 forType:(int)a1;
- (void)persistULL:(unsigned long long)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistString:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (void)persistDictionary:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (id)description;
- (void)persistObject:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (void)persistData:(id)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (id)_createEmptyPersistedState;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 forType:(int)a2;
- (void)persistString:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistDate:(id)a0 forKey:(id)a1;
- (id)secureCodedObjectForKey:(id)a0 ofClass:(Class)a1 forType:(int)a2;
- (id)secureCodedObjectForKey:(id)a0 ofClass:(Class)a1 encodeClasses:(id)a2 forType:(int)a3;
- (void)persistBoolean:(BOOL)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (void)persistData:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (void)persistSecureCodedObject:(id)a0 forKey:(id)a1;
- (void)persistDictionary:(id)a0 forKey:(id)a1;
- (id)persistedContentsType;
- (BOOL)isPersistedStateLoaded;
- (void)persistULL:(unsigned long long)a0 forKey:(id)a1 forType:(int)a2 shouldPersist:(BOOL)a3;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (void)persistSecureCodedObject:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (id)_keyNameForPersistedStateType:(int)a0;
- (id)stringForKey:(id)a0 forType:(int)a1;
- (id)secureCodedObjectForKey:(id)a0 ofClass:(Class)a1;
- (void)persistObject:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (id)dateForKey:(id)a0 forType:(int)a1;
- (id)dataForKey:(id)a0 forType:(int)a1;
- (void)persistState;
- (id)secureCodedObjectForKey:(id)a0 ofClass:(Class)a1 encodeClasses:(id)a2;
- (id)dateForKey:(id)a0;
- (void)persistDate:(id)a0 forKey:(id)a1 shouldPersist:(BOOL)a2;
- (id)initWithDispatchQueue:(id)a0 withPersistencePath:(id)a1 forPolicyVersion:(id)a2;
- (BOOL)loadPersistedState;

@end
