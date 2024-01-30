@class NSString, _CDContactStatistics, NSURL;

@interface _CDContact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifierType;
@property (retain) _CDContactStatistics *statistics;
@property unsigned long long type;
@property (retain) NSString *identifier;
@property (retain) NSString *customIdentifier;
@property (readonly) NSString *handle;
@property (retain) NSString *personId;
@property unsigned long long personIdType;
@property (retain) NSString *displayName;
@property unsigned long long displayType;
@property long long participantStatus;
@property (retain) NSURL *displayImageURL;

+ (id)normalizedStringKey:(id)a0;
+ (id)predicateForContactWithPersonId:(id)a0 personIdType:(unsigned long long)a1;
+ (id)contactWithIdentifier:(id)a0 identifierType:(id)a1 personId:(id)a2 personIdType:(unsigned long long)a3;
+ (id)_contactPropertiesForContacts:(id)a0 mechanismHints:(id)a1;
+ (id)_CDValueForContactProperty:(id)a0;
+ (id)predicateForContactWithIdentifier:(id)a0;
+ (id)contactWithIdentifier:(id)a0 identifierType:(id)a1;
+ (id)typeAsCNContactPropertyKey:(unsigned long long)a0;
+ (id)predicateForContactWithType:(unsigned long long)a0;
+ (id)contactWithIdentifier:(id)a0 type:(unsigned long long)a1 displayName:(id)a2 personId:(id)a3 personIdType:(unsigned long long)a4;
+ (id)predicateForContact:(id)a0;
+ (id)contactWithIdentifier:(id)a0 identifierType:(id)a1 displayName:(id)a2 personId:(id)a3 personIdType:(unsigned long long)a4;
+ (id)contactPropertiesForContacts:(id)a0;
+ (id)predicateForContactWithDisplayName:(id)a0;
+ (id)contactPropertiesForContacts:(id)a0 mechanismHints:(id)a1;
+ (unsigned long long)typeFromString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)contactProperty;
- (id)initWithContactProperty:(id)a0;
- (id)contactPropertyWithMechanismHint:(long long)a0;
- (id)contactPropertyWithOptionalMechanismHint:(long long *)a0;
- (id)initWithINPerson:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 customIdentifier:(id)a2 displayName:(id)a3 displayType:(unsigned long long)a4 personId:(id)a5 personIdType:(unsigned long long)a6;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 customIdentifier:(id)a2 displayName:(id)a3 displayType:(unsigned long long)a4 personId:(id)a5 personIdType:(unsigned long long)a6 displayImageURL:(id)a7;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 displayName:(id)a2 personId:(id)a3 personIdType:(unsigned long long)a4;
- (BOOL)mayContainPrefix:(id)a0;
- (BOOL)mayRepresentSamePersonAs:(id)a0;
- (void)mergeWithContact:(id)a0;

@end
