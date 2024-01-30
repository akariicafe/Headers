@class NSData;

@interface _MRSendPackedVirtualTouchEventMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
