@class NSString;

@interface ABFavoritesEntry : NSObject {
    int _abUid;
    int _abIdentifier;
    NSString *_value;
    int _property;
    int _type;
    unsigned char _dirty : 1;
    NSString *_label;
    NSString *_name;
    NSString *_abDatabaseUUID;
    void *_addressBook;
}

+ (void)_runLookup;

- (id)displayName;
- (int)identifier;
- (int)property;
- (int)_abUid;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void *)ABPerson;
- (id)value;
- (id)label;
- (BOOL)isEqual:(id)a0;
- (void)_unqueueLookup;
- (void)_queueLookup;
- (id)initWithPerson:(void *)a0 property:(int)a1 identifier:(int)a2 type:(int)a3;
- (id)initWithDictionaryRepresentation:(id)a0 addressBook:(void *)a1;
- (id)initWithPerson:(void *)a0 property:(int)a1 identifier:(int)a2;
- (id)nonLocalizedLabel;
- (void)recheckAddressBook;
- (void)_lookupNotFound;
- (void)_lookupChanged:(id)a0;
- (void)_postEntryChanged;
- (int)type;
- (void)dealloc;
- (void)dictionaryRepresentation:(id *)a0 isDirty:(BOOL *)a1;
- (id)dictionaryRepresentation;

@end
