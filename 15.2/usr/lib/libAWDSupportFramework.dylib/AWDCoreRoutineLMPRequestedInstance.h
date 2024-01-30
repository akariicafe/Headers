@class NSString;

@interface AWDCoreRoutineLMPRequestedInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char confidence : 1; unsigned char occurrences : 1; unsigned char reason : 1; unsigned char suggested : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) BOOL hasSuggested;
@property (nonatomic) BOOL suggested;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) int confidence;
@property (nonatomic) BOOL hasOccurrences;
@property (nonatomic) int occurrences;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
