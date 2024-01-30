@class _MRErrorProtobuf, NSString, _MRSendCommandResultHandlerDialogProtobuf, NSData;

@interface _MRSendCommandResultStatusProtobuf : PBCodable <NSCopying> {
    NSData *_customData;
    NSString *_customDataType;
    _MRSendCommandResultHandlerDialogProtobuf *_dialog;
    _MRErrorProtobuf *_error;
    int _statusCode;
    int _type;
    struct { unsigned char statusCode : 1; unsigned char type : 1; } _has;
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
