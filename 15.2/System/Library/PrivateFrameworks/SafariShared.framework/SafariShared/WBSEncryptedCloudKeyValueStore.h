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

- (void)_setObject:(id)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithStore:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)decryptEntry:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (void).cxx_destruct;
- (id)_dsidForPrimaryAccount;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (void)dealloc;
- (int)_currentPCSConfiguration;
- (id)encryptPropertyList:(id)a0;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (id).cxx_construct;
- (id)dictionaryRepresentation;

@end
