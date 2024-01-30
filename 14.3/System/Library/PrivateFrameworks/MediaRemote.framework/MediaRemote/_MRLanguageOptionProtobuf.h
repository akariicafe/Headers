@class NSString, NSMutableArray;

@interface _MRLanguageOptionProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_characteristics;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_languageTag;
    int _type;
    struct { unsigned char type : 1; } _has;
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
