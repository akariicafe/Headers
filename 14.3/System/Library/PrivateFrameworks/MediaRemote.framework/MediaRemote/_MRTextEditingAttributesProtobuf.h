@class NSString, _MRTextInputTraitsProtobuf;

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying> {
    _MRTextInputTraitsProtobuf *_inputTraits;
    NSString *_prompt;
    NSString *_title;
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
