@class NSString;

@interface NPKProtoAssertionRequest : PBRequest <NSCopying> {
    struct { unsigned char assertionType : 1; unsigned char pending : 1; } _has;
}

@property (retain, nonatomic) NSString *requestUUIDString;
@property (nonatomic) BOOL hasAssertionType;
@property (nonatomic) int assertionType;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;

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
- (id)assertionTypeAsString:(int)a0;
- (int)StringAsAssertionType:(id)a0;

@end
