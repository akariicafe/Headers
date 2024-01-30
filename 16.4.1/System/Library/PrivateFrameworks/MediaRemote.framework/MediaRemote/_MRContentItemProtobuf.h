@class NSString, NSData, _MRContentItemMetadataProtobuf, NSMutableArray, _MRLyricsItemProtobuf;

@interface _MRContentItemProtobuf : PBCodable <NSCopying> {
    struct { unsigned char artworkDataHeight : 1; unsigned char artworkDataWidth : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) _MRContentItemMetadataProtobuf *metadata;
@property (readonly, nonatomic) BOOL hasArtworkData;
@property (retain, nonatomic) NSData *artworkData;
@property (readonly, nonatomic) BOOL hasInfo;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSMutableArray *availableLanguageOptions;
@property (retain, nonatomic) NSMutableArray *currentLanguageOptions;
@property (readonly, nonatomic) BOOL hasLyrics;
@property (retain, nonatomic) _MRLyricsItemProtobuf *lyrics;
@property (retain, nonatomic) NSMutableArray *sections;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (retain, nonatomic) NSString *parentIdentifier;
@property (readonly, nonatomic) BOOL hasAncestorIdentifier;
@property (retain, nonatomic) NSString *ancestorIdentifier;
@property (readonly, nonatomic) BOOL hasQueueIdentifier;
@property (retain, nonatomic) NSString *queueIdentifier;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) BOOL hasArtworkDataWidth;
@property (nonatomic) int artworkDataWidth;
@property (nonatomic) BOOL hasArtworkDataHeight;
@property (nonatomic) int artworkDataHeight;
@property (readonly, nonatomic) BOOL hasAssociatedParticipantIdentifier;
@property (retain, nonatomic) NSString *associatedParticipantIdentifier;

+ (Class)availableLanguageOptionsType;
+ (Class)currentLanguageOptionsType;
+ (Class)sectionsType;

- (unsigned long long)sectionsCount;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void)clearAvailableLanguageOptions;
- (id)currentLanguageOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)availableLanguageOptionsCount;
- (id)availableLanguageOptionsAtIndex:(unsigned long long)a0;
- (void)addAvailableLanguageOptions:(id)a0;
- (void)addCurrentLanguageOptions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)currentLanguageOptionsCount;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addSections:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearSections;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearCurrentLanguageOptions;

@end
