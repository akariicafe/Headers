@class ABSAddressBook, NSString, ABSSource, NSMutableSet, CNMutableContact;

@interface ABSPerson : NSObject <ABSRecord>

@property (retain, nonatomic) NSString *revertedRecordIdentifier;
@property (retain, nonatomic) NSMutableSet *nonNilSetProperties;
@property (readonly, nonatomic) int id;
@property (readonly, nonatomic) unsigned int type;
@property (weak, nonatomic) ABSAddressBook *addressBook;
@property (weak, nonatomic) ABSSource *source;
@property (readonly, nonatomic) NSString *compositeName;
@property (retain, nonatomic) CNMutableContact *cnImpl;
@property (readonly, nonatomic) NSString *CNIdentifierString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)defaultKeysToFetch;
+ (BOOL)shortNameFormatPrefersNicknames;
+ (BOOL)shortNameFormatEnabled;
+ (unsigned int)sortOrdering;
+ (unsigned int)compositeNameFormat;
+ (unsigned int)compositeNameFormatForPerson:(id)a0;
+ (id)copyCompositeNameDelimiterForPerson:(id)a0;
+ (id)createPeopleInSource:(id)a0 withVCardRepresentation:(id)a1;
+ (id)localizedNameForProperty:(int)a0;
+ (id)nameForProperty:(int)a0;
+ (id)propertyKeyForPropertyID:(int)a0;
+ (void)setCompositeNameFormat:(unsigned int)a0;
+ (unsigned int)typeForProperty:(int)a0;
+ (id)vCardRepresentationForPeople:(id)a0;

- (id)shortName;
- (unsigned long long)_cfTypeID;
- (id)initWithSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasImageData;
- (id)copyImageData;
- (void *)copyValueForProperty:(int)a0;
- (BOOL)setValue:(void *)a0 forProperty:(int)a1 withError:(struct __CFError **)a2;
- (long long)comparePersonByName:(id)a0 sortOrdering:(unsigned int)a1;
- (BOOL)completeCNImplIfNeededWithKeysToFetch:(id)a0;
- (unsigned int)compositeNameFormat;
- (id)compositeNameIgnoringOrganization:(BOOL)a0;
- (id)copyCompositeNameDelimiter;
- (id)copyImageDataWithFormat:(int)a0;
- (BOOL)getIdentifier:(int *)a0 label:(id *)a1 forMultiValueMatchingValue:(id)a2 property:(int)a3;
- (id)initWithMutableContact:(id)a0;
- (id)initWithMutableContact:(id)a0 source:(id)a1;
- (id)linkedPeople;
- (BOOL)removeImageDataWithError:(id *)a0;
- (BOOL)removeProperty:(int)a0 withError:(id *)a1;
- (void)replaceRecordStorageWithCNObject:(id)a0;
- (BOOL)setImageData:(id)a0 withError:(id *)a1;
- (void)setValue:(id)a0 forSoundIdentifier:(int)a1;
- (id)soundIdentifierForMultivalueIdentifier:(int)a0;
- (id)stringFromFormatter:(id)a0;

@end
