@class NSCountedSet, NSMutableDictionary;

@interface ABDataCollection : NSObject {
    void *_addressBook;
}

@property (nonatomic) BOOL runningUnitTests;
@property (nonatomic) int totalContacts;
@property (nonatomic) int totalGroups;
@property (retain, nonatomic) NSCountedSet *sourceTypeScalarKeys;
@property (nonatomic) BOOL isLocalSourceOnly;
@property (nonatomic) BOOL isLocalSourceRemaining;
@property (nonatomic) BOOL isMeCardSet;
@property (nonatomic) BOOL isMeCardHomeAddressSet;
@property (nonatomic) BOOL isMeCardWorkAddressSet;
@property (nonatomic) int totalContactsWithPhotos;
@property (nonatomic) int totalContactsWithBirthdays;
@property (nonatomic) int totalContactsWithYearOnBirthday;
@property (nonatomic) int totalContactsWithAnniversaries;
@property (retain, nonatomic) NSMutableDictionary *propertyCountForRecordID;

+ (void)logContactUpdate:(long long)a0;
+ (void)logContactCreation:(long long)a0;
+ (void)logPropertyAdded:(int)a0 forContact:(void *)a1;
+ (BOOL)isEnabled;

- (void)logAllData;
- (void)dealloc;
- (void)logTotalContacts;
- (void)logTotalGroups;
- (void)logSources;
- (void)logTotalContactsWithPhotos;
- (void)logTotalContactsWithAnniversary;
- (void)logTotalContactsWithBirthday;
- (void)logTotalContactsWithYearOnBirthday;
- (void)logPropertyCountPerContact;
- (id)_sourceTypeAsString:(int)a0;
- (void)logTotalContactsWithManualLinks;
- (void)logMeCard;
- (id)initWithAddressBook:(void *)a0;

@end
