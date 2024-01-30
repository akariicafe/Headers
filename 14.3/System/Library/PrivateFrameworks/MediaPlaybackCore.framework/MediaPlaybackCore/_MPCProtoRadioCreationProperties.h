@class NSString, _MPCProtoRadioContentReference, _MPCProtoDelegateInfo;

@interface _MPCProtoRadioCreationProperties : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRadioStationID;
@property (retain, nonatomic) NSString *radioStationID;
@property (readonly, nonatomic) BOOL hasRadioStationURLString;
@property (retain, nonatomic) NSString *radioStationURLString;
@property (readonly, nonatomic) BOOL hasSeedContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReference *seedContentReference;
@property (readonly, nonatomic) BOOL hasNowPlayingContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReference *nowPlayingContentReference;
@property (readonly, nonatomic) BOOL hasAccountInfo;
@property (retain, nonatomic) _MPCProtoDelegateInfo *accountInfo;
@property (readonly, nonatomic) BOOL hasPlayActivityFeatureName;
@property (retain, nonatomic) NSString *playActivityFeatureName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
