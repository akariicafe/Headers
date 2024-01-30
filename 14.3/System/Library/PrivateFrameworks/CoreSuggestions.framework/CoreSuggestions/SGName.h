@class NSString, SGExtractionInfo;

@interface SGName : SGObject

@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *prefix;
@property (readonly, nonatomic) NSString *suffix;
@property (readonly, nonatomic) SGExtractionInfo *extractionInfo;

+ (BOOL)supportsSecureCoding;
+ (id)nameWithFirstName:(id)a0 lastName:(id)a1 middleName:(id)a2 fullName:(id)a3 prefix:(id)a4 suffix:(id)a5 withRecordId:(id)a6 origin:(id)a7;
+ (id)nameWithFirstName:(id)a0 lastName:(id)a1 withRecordId:(id)a2 origin:(id)a3;
+ (id)nameWithFirstName:(id)a0 withRecordId:(id)a1 origin:(id)a2;

- (id)initWithFirstName:(id)a0 middleName:(id)a1 lastName:(id)a2 fullName:(id)a3 prefix:(id)a4 suffix:(id)a5 recordId:(id)a6 origin:(id)a7 extractionInfo:(id)a8;
- (void).cxx_destruct;
- (id)initWithFirstName:(id)a0 middleName:(id)a1 lastName:(id)a2 fullName:(id)a3 prefix:(id)a4 suffix:(id)a5 recordId:(id)a6 origin:(id)a7;
- (BOOL)isEqualToName:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;

@end
