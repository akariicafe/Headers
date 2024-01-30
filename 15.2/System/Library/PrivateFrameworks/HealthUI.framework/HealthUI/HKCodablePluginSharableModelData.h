@class NSData, NSString;

@interface HKCodablePluginSharableModelData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserData;
@property (retain, nonatomic) NSData *userData;
@property (readonly, nonatomic) BOOL hasSourceTimeZoneIdentifier;
@property (retain, nonatomic) NSString *sourceTimeZoneIdentifier;
@property (readonly, nonatomic) BOOL hasSourceLocaleIdentifier;
@property (retain, nonatomic) NSString *sourceLocaleIdentifier;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
