@class NSData, NSString;

@interface HKHealthWrapCodableValue : PBCodable <NSCopying> {
    struct { unsigned char integer : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasBytes;
@property (retain, nonatomic) NSData *bytes;
@property (readonly, nonatomic) BOOL hasString;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) BOOL hasInteger;
@property (nonatomic) long long integer;

- (int)StringAsType:(id)a0;
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
- (id)typeAsString:(int)a0;

@end
