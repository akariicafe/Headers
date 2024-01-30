@class NSString;

@interface SBPBDisplayItem : PBCodable <NSCopying> {
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    int _type;
    NSString *_webClipIdentifier;
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
