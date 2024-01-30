@class _INPBContactHandle, NSArray, NSString, _INPBImageValue, _INPBValueMetadata;

@interface _INPBContactValue : PBCodable <_INPBContactValue, NSSecureCoding, NSCopying> {
    struct { unsigned char isContactSuggestion : 1; unsigned char isMe : 1; unsigned char searchProvider : 1; unsigned char suggestionType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) unsigned long long aliasesCount;
@property (retain, nonatomic) _INPBContactHandle *contactHandle;
@property (readonly, nonatomic) BOOL hasContactHandle;
@property (copy, nonatomic) NSString *customIdentifier;
@property (readonly, nonatomic) BOOL hasCustomIdentifier;
@property (copy, nonatomic) NSString *firstName;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (copy, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL hasFullName;
@property (copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) BOOL hasHandle;
@property (retain, nonatomic) _INPBImageValue *image;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL isContactSuggestion;
@property (nonatomic) BOOL hasIsContactSuggestion;
@property (nonatomic) BOOL isMe;
@property (nonatomic) BOOL hasIsMe;
@property (copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic) BOOL hasLastName;
@property (copy, nonatomic) NSString *middleName;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (copy, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) BOOL hasNamePrefix;
@property (copy, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) BOOL hasNameSuffix;
@property (copy, nonatomic) NSString *nickName;
@property (readonly, nonatomic) BOOL hasNickName;
@property (copy, nonatomic) NSString *phonemeData;
@property (readonly, nonatomic) BOOL hasPhonemeData;
@property (copy, nonatomic) NSString *phoneticFirstName;
@property (readonly, nonatomic) BOOL hasPhoneticFirstName;
@property (copy, nonatomic) NSString *phoneticLastName;
@property (readonly, nonatomic) BOOL hasPhoneticLastName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (readonly, nonatomic) BOOL hasPhoneticMiddleName;
@property (copy, nonatomic) NSString *phoneticNamePrefix;
@property (readonly, nonatomic) BOOL hasPhoneticNamePrefix;
@property (copy, nonatomic) NSString *phoneticNameSuffix;
@property (readonly, nonatomic) BOOL hasPhoneticNameSuffix;
@property (copy, nonatomic) NSString *relationship;
@property (readonly, nonatomic) BOOL hasRelationship;
@property (nonatomic) int searchProvider;
@property (nonatomic) BOOL hasSearchProvider;
@property (nonatomic) int suggestionType;
@property (nonatomic) BOOL hasSuggestionType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aliasesType;

- (void)addAliases:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)suggestionTypeAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearAliases;
- (id)aliasesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSearchProvider:(id)a0;
- (int)StringAsSuggestionType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)searchProviderAsString:(int)a0;
- (void).cxx_destruct;

@end
