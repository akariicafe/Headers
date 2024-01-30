@class HKSignedClinicalDataRecord, NSArray, NSMutableDictionary;

@interface HKSignedClinicalDataDetailDataProvider : NSObject

@property (retain, nonatomic) HKSignedClinicalDataRecord *record;
@property (retain, nonatomic) NSArray *medicalRecords;
@property (retain, nonatomic) NSMutableDictionary *displayItems;
@property (retain, nonatomic) NSMutableDictionary *sectionHeaders;
@property (retain, nonatomic) NSMutableDictionary *sectionFooters;
@property (nonatomic) long long sectionIndex;

- (long long)numberOfSections;
- (long long)numberOfRowsForSection:(long long)a0;
- (void).cxx_destruct;
- (id)nameItem;
- (id)raceItem;
- (id)sourceItem;
- (id)displayItemForSection:(long long)a0 row:(long long)a1;
- (id)footerForSection:(long long)a0;
- (id)statusItem;
- (id)initWithSignedRecord:(id)a0 medicalRecords:(id)a1;
- (void)createDisplayItems;
- (void)createPersonalInfoItems;
- (void)createRecordSections;
- (void)createVerificationItems;
- (id)birthdayItem;
- (id)genderItem;
- (id)emailAddressesItem;
- (id)phoneNumbersItem;
- (id)addressesItem;
- (id)maritalStatusItem;
- (id)ethnicityItem;
- (id)birthSexItem;
- (id)identifiersItem;
- (id)recordItemWithMedicalRecord:(id)a0;
- (id)valueItemWithTestResult:(id)a0;
- (id)statusItemWithMedicalRecord:(id)a0;
- (id)issuedItem;
- (id)expiresItem;
- (id)headerForSection:(long long)a0;

@end
