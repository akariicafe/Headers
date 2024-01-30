@class NSMutableArray;

@interface SCLPBScheduleSettings : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char isEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL isEnabled;
@property (retain, nonatomic) NSMutableArray *recurrences;

+ (Class)recurrencesType;

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
- (void)addRecurrences:(id)a0;
- (unsigned long long)recurrencesCount;
- (void)clearRecurrences;
- (id)recurrencesAtIndex:(unsigned long long)a0;

@end
