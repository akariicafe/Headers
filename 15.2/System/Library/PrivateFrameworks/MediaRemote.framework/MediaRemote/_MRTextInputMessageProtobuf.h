@class NSString;

@interface _MRTextInputMessageProtobuf : PBCodable <NSCopying> {
    double _timestamp;
    int _actionType;
    NSString *_text;
    struct { unsigned char timestamp : 1; unsigned char actionType : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
