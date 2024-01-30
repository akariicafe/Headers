@interface _MRSendButtonEventMessageProtobuf : PBCodable <NSCopying> {
    unsigned int _usage;
    unsigned int _usagePage;
    BOOL _buttonDown;
    struct { unsigned char usage : 1; unsigned char usagePage : 1; unsigned char buttonDown : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
