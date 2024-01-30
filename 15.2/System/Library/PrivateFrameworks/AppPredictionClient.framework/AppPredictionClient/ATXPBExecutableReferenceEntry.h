@class NSString;

@interface ATXPBExecutableReferenceEntry : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char shouldClearOnEngagement : 1; unsigned char shouldPurge : 1; unsigned char suggestionIsHidden : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) BOOL hasShouldClearOnEngagement;
@property (nonatomic) BOOL shouldClearOnEngagement;
@property (nonatomic) BOOL hasShouldPurge;
@property (nonatomic) BOOL shouldPurge;
@property (nonatomic) BOOL hasSuggestionIsHidden;
@property (nonatomic) BOOL suggestionIsHidden;

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

@end
