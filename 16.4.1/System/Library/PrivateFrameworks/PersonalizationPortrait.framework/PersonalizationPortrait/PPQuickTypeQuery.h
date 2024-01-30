@class NSArray, NSString, NSNumber;

@interface PPQuickTypeQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char type;
@property (nonatomic) unsigned char subtype;
@property (nonatomic) unsigned char semanticTag;
@property (nonatomic) unsigned int fields;
@property (nonatomic) unsigned char time;
@property (nonatomic) unsigned char options;
@property (retain, nonatomic) NSArray *subFields;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSArray *people;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSNumber *timeoutSeconds;

+ (id)_subfieldsFromString:(id)a0;
+ (id)_peopleNamesFromLMQualifiers:(id)a0;
+ (unsigned char)_semanticTagFromString:(id)a0;
+ (id)quickTypeQueryWithType:(unsigned char)a0 subtype:(unsigned char)a1 semanticTag:(unsigned char)a2 fields:(unsigned int)a3 time:(unsigned char)a4 subFields:(id)a5 label:(id)a6 people:(id)a7 localeIdentifier:(id)a8 bundleIdentifier:(id)a9 recipients:(id)a10;
+ (id)quickTypeQueryWithType:(unsigned char)a0 subtype:(unsigned char)a1 semanticTag:(unsigned char)a2 fields:(unsigned int)a3 time:(unsigned char)a4 options:(unsigned char)a5 subFields:(id)a6 label:(id)a7 people:(id)a8 localeIdentifier:(id)a9 bundleIdentifier:(id)a10 recipients:(id)a11;
+ (unsigned char)_subtypeFromString:(id)a0;
+ (unsigned int)_fieldsFromStrings:(id)a0;
+ (id)quickTypeQueryFromLMTokens:(id)a0 localeIdentifier:(id)a1 recipients:(id)a2 bundleIdentifier:(id)a3;
+ (id)_labelFromLMFieldString:(id)a0 qualifiers:(id)a1;
+ (unsigned char)_typeFromString:(id)a0;
+ (unsigned char)_timeFromString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isResultEquivelentToQuickTypeQuery:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned char)a0 subtype:(unsigned char)a1 semanticTag:(unsigned char)a2 fields:(unsigned int)a3 time:(unsigned char)a4 options:(unsigned char)a5 subFields:(id)a6 label:(id)a7 people:(id)a8 localeIdentifier:(id)a9 bundleIdentifier:(id)a10 recipients:(id)a11 timeoutSeconds:(id)a12;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToQuickTypeQuery:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
