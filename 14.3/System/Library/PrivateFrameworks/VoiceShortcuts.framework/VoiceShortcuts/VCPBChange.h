@class NSString, NSData;

@interface VCPBChange : PBCodable <NSCopying>

@property (nonatomic) int messageType;
@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSData *message;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)messageTypeAsString:(int)a0;
- (int)StringAsMessageType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)changeTypeAsString:(int)a0;

@end
