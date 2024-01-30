@class NSString, NSMutableArray, NSData;

@interface CESRCorrectionPronunciation : PBCodable <NSCopying> {
    struct { unsigned char tokenOffset : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOrthography;
@property (retain, nonatomic) NSString *orthography;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasApgId;
@property (retain, nonatomic) NSString *apgId;
@property (readonly, nonatomic) BOOL hasTtsVersion;
@property (retain, nonatomic) NSString *ttsVersion;
@property (nonatomic) BOOL hasTokenOffset;
@property (nonatomic) int tokenOffset;
@property (retain, nonatomic) NSMutableArray *ttsPronunciations;
@property (readonly, nonatomic) BOOL hasAsrPronunciationData;
@property (retain, nonatomic) NSData *asrPronunciationData;

+ (Class)ttsPronunciationsType;

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
- (void)addTtsPronunciations:(id)a0;
- (unsigned long long)ttsPronunciationsCount;
- (void)clearTtsPronunciations;
- (id)ttsPronunciationsAtIndex:(unsigned long long)a0;

@end
