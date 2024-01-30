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
- (id)displayName;
- (int)type;
- (int)identifier;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)value;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)label;
- (int)_abUid;
- (void)dictionaryRepresentation:(id *)a0 isDirty:(BOOL *)a1;
- (void *)ABPerson;
- (void)_lookupChanged:(id)a0;
- (void)_lookupNotFound;
- (void)_postEntryChanged;
- (void)_queueLookup;
- (void)_unqueueLookup;
- (id)initWithDictionaryRepresentation:(id)a0 addressBook:(void *)a1;
- (id)initWithPerson:(void *)a0 property:(int)a1 identifier:(int)a2;
- (id)initWithPerson:(void *)a0 property:(int)a1 identifier:(int)a2 type:(int)a3;
- (id)nonLocalizedLabel;
- (void)recheckAddressBook;

@end
