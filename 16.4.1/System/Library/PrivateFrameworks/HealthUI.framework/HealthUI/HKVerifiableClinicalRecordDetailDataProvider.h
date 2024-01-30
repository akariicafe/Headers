@class HKSignedClinicalDataRecord, NSArray, NSMutableDictionary;

@interface HKVerifiableClinicalRecordDetailDataProvider : NSObject

@property (retain, nonatomic) HKSignedClinicalDataRecord *record;
@property (retain, nonatomic) NSArray *medicalRecords;
@property (retain, nonatomic) NSMutableDictionary *displayItems;
@property (retain, nonatomic) NSMutableDictionary *sectionHeaders;
@property (retain, nonatomic) NSMutableDictionary *sectionFooters;
@property (nonatomic) long long sectionIndex;

- (long long)numberOfRowsForSection:(long long)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)sourceItem;
- (id)nameItem;
- (id)statusItem;
- (id)identifiersItem;
- (id)addressesItem;
- (id)birthSexItem;
- (id)birthdayItem;
- (void)createDisplayItems;
- (void)createPersonalInfoItems;
- (void)createRecordSections;
- (void)createVerificationItems;
- (id)displayItemForSection:(long long)a0 row:(long long)a1;
- (id)emailAddressesItem;
- (id)ethnicityItem;
- (id)expiresItem;
- (id)footerForSection:(long long)a0;
- (id)genderItem;
- (id)headerForSection:(long long)a0;
- (id)initWithSignedRecord:(id)a0 medicalRecords:(id)a1;
- (id)issuedItem;
- (id)maritalStatusItem;
- (id)phoneNumbersItem;
- (id)raceItem;

@end
