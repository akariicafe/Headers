@class NSString;

@interface _DKPRSource : PBCodable <NSCopying> {
    NSString *_bundleID;
    NSString *_deviceID;
    NSString *_groupID;
    NSString *_itemID;
    NSString *_sourceID;
    int _userID;
    struct { unsigned char userID : 1; } _has;
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
