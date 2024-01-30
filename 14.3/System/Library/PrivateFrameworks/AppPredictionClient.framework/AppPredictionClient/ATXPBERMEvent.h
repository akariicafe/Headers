@class NSData, NSMutableArray;

@interface ATXPBERMEvent : PBCodable <NSCopying> {
    struct { unsigned char dateEngaged : 1; unsigned char engagementType : 1; unsigned char eventDate : 1; unsigned char eventType : 1; unsigned char executableType : 1; } _has;
}

@property (nonatomic) BOOL hasEventDate;
@property (nonatomic) double eventDate;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasDateEngaged;
@property (nonatomic) double dateEngaged;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) unsigned long long engagementType;
@property (nonatomic) BOOL hasExecutableType;
@property (nonatomic) int executableType;
@property (readonly, nonatomic) BOOL hasExecutable;
@property (retain, nonatomic) NSData *executable;
@property (retain, nonatomic) NSMutableArray *clientModelIds;

+ (Class)clientModelIdType;

- (id)eventTypeAsString:(int)a0;
- (int)StringAsEventType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)executableTypeAsString:(int)a0;
- (int)StringAsExecutableType:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addClientModelId:(id)a0;
- (unsigned long long)clientModelIdsCount;
- (void)clearClientModelIds;
- (id)clientModelIdAtIndex:(unsigned long long)a0;

@end
