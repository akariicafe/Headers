@class NSString;

@interface _MRTextInputMessageProtobuf : PBCodable <NSCopying> {
    double _timestamp;
    int _actionType;
    NSString *_text;
    struct { unsigned char timestamp : 1; unsigned char actionType : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
