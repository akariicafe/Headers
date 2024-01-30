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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRecurrences:(id)a0;
- (unsigned long long)recurrencesCount;
- (void)clearRecurrences;
- (id)recurrencesAtIndex:(unsigned long long)a0;

@end
