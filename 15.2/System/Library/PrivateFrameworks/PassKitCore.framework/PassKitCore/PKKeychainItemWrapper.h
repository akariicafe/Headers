@class NSString, NSMutableDictionary;

@interface PKKeychainItemWrapper : NSObject {
    BOOL _invisible;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long accessibility;
@property (retain, nonatomic) NSMutableDictionary *keychainItemData;
@property (retain, nonatomic) NSMutableDictionary *genericPasswordQuery;
@property (copy, nonatomic) NSString *label;

- (id)initWithIdentifier:(id)a0 accessGroup:(id)a1 serviceName:(id)a2 type:(unsigned long long)a3 invisible:(BOOL)a4;
- (void)resetKeychainItem;
- (id)initWithIdentifier:(id)a0 accessGroup:(id)a1 serviceName:(id)a2 type:(unsigned long long)a3 invisible:(BOOL)a4 accessibility:(unsigned long long)a5;
- (void)applySynchronizableValueToDictionary:(id)a0;
- (id)secItemFormatToDictionary:(id)a0;
- (void)writeToKeychain;
- (void)_resetKeychainItem:(BOOL)a0;
- (id)dictionaryToSecItemFormat:(id)a0;
- (void)applyAccessibilityValueToDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 accessGroup:(id)a1 serviceName:(id)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)resetLocalKeychainItem;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
