@class NSString, NSMutableArray;

@interface BMPBParsecSearchEntity : PBCodable <NSCopying> {
    struct { unsigned char category : 1; unsigned char probabilityScore : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) unsigned int category;
@property (nonatomic) BOOL hasProbabilityScore;
@property (nonatomic) float probabilityScore;
@property (retain, nonatomic) NSMutableArray *topics;

+ (Class)topicsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)topicsCount;
- (void)addTopics:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)topicsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearTopics;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
