@class NSArray, SGName, SGDateComponents, SGRecordId, NSString;

@interface SGContact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SGName *name;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSArray *phones;
@property (copy, nonatomic) NSArray *postalAddresses;
@property (copy, nonatomic) NSArray *instantMessageAddresses;
@property (copy, nonatomic) NSArray *socialProfiles;
@property (copy, nonatomic) SGDateComponents *birthday;
@property (nonatomic) unsigned long long significance;
@property (nonatomic) unsigned long long significanceOrigin;
@property (nonatomic) int updatedFields;
@property (readonly, nonatomic) SGRecordId *recordId;
@property (readonly, copy, nonatomic) NSString *photoPath;

+ (id)contactWithId:(id)a0 name:(id)a1 emailAddresses:(id)a2 phones:(id)a3 postalAddresses:(id)a4 instantMessageAddresses:(id)a5 socialProfiles:(id)a6;
+ (id)contactWithId:(id)a0 name:(id)a1 emailAddresses:(id)a2 phones:(id)a3 postalAddresses:(id)a4;
+ (id)contactWithId:(id)a0 name:(id)a1 emailAddresses:(id)a2 phones:(id)a3 postalAddresses:(id)a4 instantMessageAddresses:(id)a5 socialProfiles:(id)a6 birthday:(id)a7 photoPath:(id)a8;

- (BOOL)isEqualToContact:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithId:(id)a0 name:(id)a1 emailAddresses:(id)a2 phones:(id)a3 postalAddresses:(id)a4 instantMessageAddresses:(id)a5 socialProfiles:(id)a6 birthday:(id)a7 photoPath:(id)a8;
- (BOOL)hasNonTrivialInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)containsDetailSuggestions;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)cnContact;
- (BOOL)containsSuggestions;
- (id)addresses;
- (id)detailForRecordId:(id)a0;
- (unsigned long long)richness;
- (void)encodeWithCoder:(id)a0;

@end
