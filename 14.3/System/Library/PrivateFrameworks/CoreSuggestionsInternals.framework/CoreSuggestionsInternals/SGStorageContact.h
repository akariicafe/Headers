@class SGContactDetailsHolder, NSString, SGRecordId, NSMutableSet;

@interface SGStorageContact : NSObject {
    NSMutableSet *_profiles;
}

@property (retain) SGContactDetailsHolder *internalDetectedDetails;
@property (readonly, nonatomic) long long masterEntityId;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SGRecordId *recordId;

+ (id)mergeAll:(id)a0;
+ (void)subtractDetailsFromSGContact:(id)a0 thatMatchCNContact:(id)a1;
+ (id)contactFromContactEntity:(id)a0;
+ (id)contactWithMasterEntityId:(long long)a0;

- (void)merge:(id)a0;
- (id)profiles;
- (void)reload;
- (id)convertToContact:(id)a0 sourceEntity:(id)a1 enrichments:(id)a2;
- (BOOL)hasProfileFromInteraction;
- (id)init;
- (void).cxx_destruct;
- (id)loadPhoneDetailsFrom:(id)a0;
- (unsigned long long)hash;
- (id)loadAddressDetailsFrom:(id)a0;
- (id)loadEmailAddressDetailsFrom:(id)a0;
- (id)description;
- (BOOL)hasProfileFromTextMessage;
- (id)convertToContact:(id)a0;
- (BOOL)isEqualToStorageContact:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addProfile:(id)a0;
- (id)loadAllDetailsFrom:(id)a0;
- (id)allNames;
- (BOOL)canMerge:(id)a0;
- (id)loadBirthdayDetailsFrom:(id)a0;
- (id)bestProfile;

@end
