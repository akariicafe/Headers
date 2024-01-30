@class NSString, NSMutableArray;

@interface AWDSpringBoardPressSequence : PBCodable <NSCopying> {
    struct { unsigned char clickMax : 1; unsigned char timestamp : 1; unsigned char didTriggerSOS : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *sequences;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) BOOL hasDidTriggerSOS;
@property (nonatomic) BOOL didTriggerSOS;
@property (nonatomic) BOOL hasClickMax;
@property (nonatomic) unsigned long long clickMax;
@property (readonly, nonatomic) BOOL hasUUID;
@property (retain, nonatomic) NSString *uUID;

+ (Class)sequenceType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSequence:(id)a0;
- (unsigned long long)sequencesCount;
- (void)clearSequences;
- (id)sequenceAtIndex:(unsigned long long)a0;

@end
