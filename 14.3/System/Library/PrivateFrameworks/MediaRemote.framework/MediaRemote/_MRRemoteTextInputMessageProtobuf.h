@class NSData;

@interface _MRRemoteTextInputMessageProtobuf : PBCodable <NSCopying> {
    double _timestamp;
    unsigned long long _version;
    struct { unsigned char timestamp : 1; unsigned char version : 1; } _has;
}

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
