@class NSDictionary, NSArray;

@interface AMSFamilyInfoLookupResult : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isCached) BOOL cached;
@property (readonly, nonatomic) NSArray *familyMembers;
@property (readonly, nonatomic, getter=isHeadOfHouseholdSharingPayment) BOOL headOfHouseholdSharingPayment;

+ (id)_familyMembersFromDictionaryRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 cached:(BOOL)a1;
- (id)description;

@end
