@class NSString;

@interface PREUMMessageMetadata : PBCodable <NSCopying> {
    struct { unsigned char ageGroup : 1; unsigned char charCount : 1; unsigned char hasQuestionMark : 1; unsigned char isApricotDevice : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasHostProcess;
@property (retain, nonatomic) NSString *hostProcess;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasLang;
@property (retain, nonatomic) NSString *lang;
@property (nonatomic) BOOL hasIsApricotDevice;
@property (nonatomic) BOOL isApricotDevice;
@property (nonatomic) BOOL hasCharCount;
@property (nonatomic) unsigned int charCount;
@property (nonatomic) BOOL hasAgeGroup;
@property (nonatomic) int ageGroup;
@property (nonatomic) BOOL hasHasQuestionMark;
@property (nonatomic) BOOL hasQuestionMark;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)ageGroupAsString:(int)a0;
- (int)StringAsAgeGroup:(id)a0;

@end
