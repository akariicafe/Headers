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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
