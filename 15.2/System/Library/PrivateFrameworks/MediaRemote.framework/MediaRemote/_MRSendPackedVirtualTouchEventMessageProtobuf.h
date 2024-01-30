@class NSData;

@interface _MRSendPackedVirtualTouchEventMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
