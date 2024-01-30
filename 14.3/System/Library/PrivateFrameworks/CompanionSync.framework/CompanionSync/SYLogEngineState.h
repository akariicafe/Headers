@interface SYLogEngineState : PBCodable <NSCopying> {
    struct { unsigned char buffersSessions : 1; unsigned char inSession : 1; unsigned char suspended : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL hasSuspended;
@property (nonatomic) BOOL suspended;
@property (nonatomic) BOOL hasInSession;
@property (nonatomic) BOOL inSession;
@property (nonatomic) BOOL hasBuffersSessions;
@property (nonatomic) BOOL buffersSessions;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;

@end
