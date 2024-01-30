@class NSString, NSDictionary, NSSet, NSMutableDictionary, NSNumber;

@interface FKPerson : NSObject <NSCopying, NSSecureCoding> {
    NSString *_primaryDestination;
    NSString *_initials;
    NSNumber *_phoneNumberCount;
    NSNumber *_emailAddressCount;
    int _abRecordID;
    NSString *_abRecordGUID;
    NSString *_abDatabaseUID;
    NSString *_name;
    NSSet *_allValues;
    NSMutableDictionary *_metadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL needsSave;
@property (readonly, nonatomic) BOOL hasUnreadMessages;
@property (retain, nonatomic) NSString *preferredReplyAs;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

+ (id)allValuesForPerson:(void *)a0;
+ (id)sharedMetadataQueue;
+ (id)_allPhoneValuesInSet:(id)a0;
+ (id)_allEmailValuesInSet:(id)a0;
+ (id)preferredNameForPerson:(void *)a0;
+ (id)_allEmailValuesForRecord:(void *)a0;
+ (id)_allPhoneValuesForRecord:(void *)a0;
+ (int)addValue:(void *)a0 withLabel:(struct __CFString { } *)a1 toPerson:(void *)a2 property:(int)a3;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)allValues;
- (void)_postChangeNotification;
- (id)description;
- (BOOL)hasName;
- (id)_metadataDictionary;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0 addressBook:(void *)a1;
- (id)metadataValueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)displayName;
- (void)setMetadataValue:(id)a0 forKey:(id)a1;
- (id)initWithFavorite:(id)a0 addressBook:(void *)a1;
- (id)abRecordGUID;
- (BOOL)isLikePerson:(id)a0;
- (id)initWithDestinations:(id)a0 addressBook:(void *)a1;
- (id)initWithABRecordGUID:(id)a0 addressBook:(void *)a1;
- (BOOL)isEqualToDictionaryRepresentation:(id)a0;
- (BOOL)updateFromDictionaryRepresentation:(id)a0;
- (unsigned long long)allValuesCount;
- (void)refreshWithAddressBook:(void *)a0;
- (BOOL)_updateFromDictionaryRepresentation:(id)a0 shouldLogUpdates:(BOOL)a1;
- (void)_reconcile:(void *)a0 canPostChangeNotification:(BOOL)a1 shouldLogUpdates:(BOOL)a2;
- (void)_setABRecordGUID:(id)a0;
- (id)primaryDestination;
- (id)_recordMatchDictionaryFromCFArray:(struct __CFArray { } *)a0 followLinks:(BOOL)a1 addressBook:(void *)a2;
- (void *)_bestRecordMatchFromDictionary:(id)a0 addressBook:(void *)a1;
- (float)_allValuesMatchScore:(id)a0;
- (void)addMetadataEntriesFromDictionary:(id)a0;
- (void)removeAllMetadataValues;
- (void *)copyABPersonWithAddressBook:(void *)a0;
- (id)abDatabaseUID;
- (id)initials;

@end
