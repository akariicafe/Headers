@class NSMutableArray, _MRLanguageOptionProtobuf;

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying> {
    _MRLanguageOptionProtobuf *_defaultLanguageOption;
    NSMutableArray *_languageOptions;
    BOOL _allowEmptySelection;
    struct { unsigned char allowEmptySelection : 1; } _has;
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
