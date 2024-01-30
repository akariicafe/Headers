@class NSString, NSData;

@interface VCPBChange : PBCodable <NSCopying>

@property (nonatomic) int messageType;
@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSData *message;

- (id)messageTypeAsString:(int)a0;
- (id)changeTypeAsString:(int)a0;
- (int)StringAsChangeType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsMessageType:(id)a0;
- (void).cxx_destruct;

@end
