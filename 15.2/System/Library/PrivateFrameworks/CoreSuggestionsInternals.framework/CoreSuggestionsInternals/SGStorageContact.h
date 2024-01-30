@class SGContactDetailsHolder, NSString, SGRecordId, NSMutableSet;

@interface SGStorageContact : NSObject {
    NSMutableSet *_profiles;
}

@property (retain) SGContactDetailsHolder *internalDetectedDetails;
@property (readonly, nonatomic) long long masterEntityId;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SGRecordId *recordId;

+ (id)contactFromContactEntity:(id)a0;
+ (id)contactWithMasterEntityId:(long long)a0;
+ (id)mergeAll:(id)a0;

- (void)merge:(id)a0;
- (BOOL)canMerge:(id)a0;
- (void)reload;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)profiles;
- (void)addProfile:(id)a0;
- (id)allNames;
- (unsigned long long)hash;
- (BOOL)isEqualToStorageContact:(id)a0;
- (id)loadAllDetailsFrom:(id)a0;
- (id)loadPhoneDetailsFrom:(id)a0;
- (id)loadAddressDetailsFrom:(id)a0;
- (id)loadEmailAddressDetailsFrom:(id)a0;
- (id)loadBirthdayDetailsFrom:(id)a0;
- (id)convertToContact:(id)a0;
- (id)convertToContact:(id)a0 sourceEntity:(id)a1 enrichments:(id)a2;
- (id)bestProfile;
- (BOOL)hasProfileFromInteraction;
- (BOOL)hasProfileFromTextMessage;

@end
