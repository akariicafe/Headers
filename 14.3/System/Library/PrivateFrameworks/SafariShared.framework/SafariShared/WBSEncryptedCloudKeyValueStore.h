@class NSString, NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject {
    id _accountUpdateObserver;
    NSString *_dsid;
    struct RetainPtr<_PCSIdentitySetData *> { void *m_ptr; } _pcsIdentitySet;
    struct RetainPtr<_OpaquePCSShareProtection *> { void *m_ptr; } _pcsShareProtection;
    struct RetainPtr<const __CFData *> { void *m_ptr; } _serializedPCSObject;
}

@property (readonly, nonatomic) NSUbiquitousKeyValueStore *backingStore;

+ (id)defaultStore;
+ (id)additionalStoreWithIdentifier:(id)a0;

- (id)initWithStore:(id)a0;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)decryptEntry:(id)a0;
- (int)_currentPCSConfiguration;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (void)synchronize;
- (id)encryptPropertyList:(id)a0;
- (id)_dsidForPrimaryAccount;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (id)dictionaryForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
