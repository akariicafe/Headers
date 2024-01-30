@class NSMutableArray, _MRLanguageOptionProtobuf;

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying> {
    _MRLanguageOptionProtobuf *_defaultLanguageOption;
    NSMutableArray *_languageOptions;
    BOOL _allowEmptySelection;
    struct { unsigned char allowEmptySelection : 1; } _has;
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
