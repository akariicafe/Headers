@interface _MRRegisterForGameControllerEventsMessageProtobuf : PBCodable <NSCopying> {
    int _inputModeFlags;
    struct { unsigned char inputModeFlags : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
