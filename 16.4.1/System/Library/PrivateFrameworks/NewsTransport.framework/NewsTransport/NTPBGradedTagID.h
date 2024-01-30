@class NSString;

@interface NTPBGradedTagID : PBCodable <NSCopying> {
    struct { unsigned char grade : 1; unsigned char source : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSString *tagId;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) int grade;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
