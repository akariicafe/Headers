@class NSData;

@interface INFERENCESchemaINFERENCERequestMatchSignalSet : SISchemaInstrumentationMessage {
    struct { unsigned char numPrimaryTokens : 1; unsigned char areAllQueryTokensInContact : 1; unsigned char areAllPrimaryContactTokensInQuery : 1; unsigned char isGivenNameMatch : 1; unsigned char isMiddleNameMatch : 1; unsigned char isFamilyNameMatch : 1; unsigned char isOrganizationNameMatch : 1; unsigned char isWeakOrganizationMatch : 1; unsigned char isNicknameMatch : 1; unsigned char isNamePrefixMatch : 1; unsigned char isNameSuffixMatch : 1; unsigned char isHandleQueryMatch : 1; unsigned char isHandleQueryLabelNameMatch : 1; } _has;
}

@property (nonatomic) unsigned int numPrimaryTokens;
@property (nonatomic) BOOL hasNumPrimaryTokens;
@property (nonatomic) BOOL areAllQueryTokensInContact;
@property (nonatomic) BOOL hasAreAllQueryTokensInContact;
@property (nonatomic) BOOL areAllPrimaryContactTokensInQuery;
@property (nonatomic) BOOL hasAreAllPrimaryContactTokensInQuery;
@property (nonatomic) BOOL isGivenNameMatch;
@property (nonatomic) BOOL hasIsGivenNameMatch;
@property (nonatomic) BOOL isMiddleNameMatch;
@property (nonatomic) BOOL hasIsMiddleNameMatch;
@property (nonatomic) BOOL isFamilyNameMatch;
@property (nonatomic) BOOL hasIsFamilyNameMatch;
@property (nonatomic) BOOL isOrganizationNameMatch;
@property (nonatomic) BOOL hasIsOrganizationNameMatch;
@property (nonatomic) BOOL isWeakOrganizationMatch;
@property (nonatomic) BOOL hasIsWeakOrganizationMatch;
@property (nonatomic) BOOL isNicknameMatch;
@property (nonatomic) BOOL hasIsNicknameMatch;
@property (nonatomic) BOOL isNamePrefixMatch;
@property (nonatomic) BOOL hasIsNamePrefixMatch;
@property (nonatomic) BOOL isNameSuffixMatch;
@property (nonatomic) BOOL hasIsNameSuffixMatch;
@property (nonatomic) BOOL isHandleQueryMatch;
@property (nonatomic) BOOL hasIsHandleQueryMatch;
@property (nonatomic) BOOL isHandleQueryLabelNameMatch;
@property (nonatomic) BOOL hasIsHandleQueryLabelNameMatch;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteAreAllPrimaryContactTokensInQuery;
- (void)deleteAreAllQueryTokensInContact;
- (void)deleteIsFamilyNameMatch;
- (void)deleteIsGivenNameMatch;
- (void)deleteIsHandleQueryLabelNameMatch;
- (void)deleteIsHandleQueryMatch;
- (void)deleteIsMiddleNameMatch;
- (void)deleteIsNamePrefixMatch;
- (void)deleteIsNameSuffixMatch;
- (void)deleteIsNicknameMatch;
- (void)deleteIsOrganizationNameMatch;
- (void)deleteIsWeakOrganizationMatch;
- (void)deleteNumPrimaryTokens;

@end
