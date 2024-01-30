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

- (int)property;
- (int)_abUid;
- (void *)ABPerson;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)value;
- (void)dictionaryRepresentation:(id *)a0 isDirty:(BOOL *)a1;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)label;
- (id)initWithPerson:(void *)a0 property:(int)a1 identifier:(int)a2 type:(int)a3;
- (id)initWithDictionaryRepresentation:(id)a0 addressBook:(void *)a1;
- (void)_unqueueLookup;
- (void)_queueLookup;
- (id)initWithPerson:(void *)a0 property:(int)a1 identifier:(int)a2;
- (id)nonLocalizedLabel;
- (void)recheckAddressBook;
- (void)_lookupNotFound;
- (void)_lookupChanged:(id)a0;
- (void)_postEntryChanged;
- (int)identifier;
- (id)displayName;

@end
