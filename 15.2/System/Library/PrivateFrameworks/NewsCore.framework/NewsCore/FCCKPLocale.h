@class NSString, NSMutableArray;

@interface FCCKPLocale : PBCodable <NSCopying> {
    NSString *_activeKeyboard;
    NSMutableArray *_enabledKeyboards;
    NSString *_languageCode;
    NSString *_regionCode;
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
