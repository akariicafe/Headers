@class NSString, NSArray;

@interface HKOntologyEducationContentSection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long propertyType;
@property (readonly, nonatomic) long long ontologyContentVersion;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *localizedText;
@property (readonly, copy, nonatomic) NSArray *localeIdentifiers;
@property (readonly, copy, nonatomic) NSArray *validRegionCodes;
@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, copy, nonatomic) NSArray *citations;

+ (id)createWithCodable:(id)a0;
+ (id)createFromPropertyRepresentation:(id)a0;
+ (id)unitTesting_educationContentSectionWithType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)codableRepresentationForSync;
- (id)initWithPropertyType:(long long)a0 ontologyContentVersion:(long long)a1 localizedText:(id)a2 localeIdentifiers:(id)a3 validRegionCodes:(id)a4 attributions:(id)a5 citations:(id)a6;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)propertyRepresentation;

@end
