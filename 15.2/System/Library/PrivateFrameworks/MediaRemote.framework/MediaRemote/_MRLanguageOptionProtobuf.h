@class NSString, NSMutableArray;

@interface _MRLanguageOptionProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_characteristics;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_languageTag;
    int _type;
    struct { unsigned char type : 1; } _has;
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
