@class NSArray, SGName, SGDateComponents, SGRecordId, NSString, _PASCachedResult;

@interface SGContact : NSObject <NSCopying, NSSecureCoding> {
    _PASCachedResult *_cachedDetailForRecordIdMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SGName *name;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSArray *phones;
@property (copy, nonatomic) NSArray *postalAddresses;
@property (copy, nonatomic) NSArray *socialProfiles;
@property (copy, nonatomic) SGDateComponents *birthday;
@property (nonatomic) unsigned long long significance;
@property (nonatomic) unsigned long long significanceOrigin;
@property (nonatomic) int updatedFields;
@property (readonly, nonatomic) SGRecordId *recordId;
@property (readonly, copy, nonatomic) NSString *photoPath;

+ (id)contactWithId:(id)a0 name:(id)a1 emailAddresses:(id)a2 phones:(id)a3 postalAddresses:(id)a4;
+ (id)contactWithId:(id)a0 name:(id)a1 emailAddresses:(id)a2 phones:(id)a3 postalAddresses:(id)a4 socialProfiles:(id)a5;
+ (id)contactWithId:(id)a0 name:(id)a1 emailAddresses:(id)a2 phones:(id)a3 postalAddresses:(id)a4 socialProfiles:(id)a5 birthday:(id)a6 photoPath:(id)a7;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cnContact;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToContact:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)addresses;
- (BOOL)containsDetailSuggestions;
- (BOOL)containsSuggestions;
- (id)detailForRecordId:(id)a0;
- (void)enumerateDetailsWithBlock:(id /* block */)a0;
- (BOOL)hasNonTrivialInfo;
- (id)initWithId:(id)a0 name:(id)a1 emailAddresses:(id)a2 phones:(id)a3 postalAddresses:(id)a4 socialProfiles:(id)a5 birthday:(id)a6 photoPath:(id)a7;
- (unsigned long long)richness;

@end
