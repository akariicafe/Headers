@class NSUUID, NSString, NSSet, NSData, HKSharedSummaryTransaction;

@interface HKSharedSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *package;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *compatibilityVersion;
@property (readonly, copy, nonatomic) NSSet *authorizationCategories;
@property (readonly, copy, nonatomic) NSSet *objectTypes;
@property (readonly, copy, nonatomic) NSData *summaryData;
@property (readonly, copy, nonatomic) HKSharedSummaryTransaction *transaction;

- (void)_setTransaction:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPackage:(id)a0 name:(id)a1 version:(id)a2 compatibilityVersion:(id)a3 authorizationCategories:(id)a4 objectTypes:(id)a5 summaryData:(id)a6;
- (id)_initWithUUID:(id)a0 package:(id)a1 name:(id)a2 version:(id)a3 compatibilityVersion:(id)a4 authorizationCategories:(id)a5 objectTypes:(id)a6 summaryData:(id)a7;
- (unsigned long long)hash;

@end
