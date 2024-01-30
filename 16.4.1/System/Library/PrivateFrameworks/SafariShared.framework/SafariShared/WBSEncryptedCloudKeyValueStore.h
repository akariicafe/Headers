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

- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (id)initWithStore:(id)a0;
- (void)synchronize;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)decryptEntry:(id)a0;
- (id)_dsidForPrimaryAccount;
- (id)encryptPropertyList:(id)a0;
- (int)_currentPCSConfiguration;
- (void).cxx_destruct;

@end
