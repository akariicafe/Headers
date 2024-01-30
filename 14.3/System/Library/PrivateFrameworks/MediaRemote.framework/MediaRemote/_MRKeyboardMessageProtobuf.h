@class _MRTextEditingAttributesProtobuf, NSData;

@interface _MRKeyboardMessageProtobuf : PBCodable <NSCopying> {
    _MRTextEditingAttributesProtobuf *_attributes;
    NSData *_encryptedTextCyphertext;
    int _state;
    struct { unsigned char state : 1; } _has;
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
