@class _INPBPrivateMediaItemValueData, NSString, NSArray, _INPBImageValue, _INPBValueMetadata;

@interface _INPBMediaItemValue : PBCodable <_INPBMediaItemValue, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *artist;
@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) _INPBImageValue *artwork;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (copy, nonatomic) NSString *assetInfo;
@property (readonly, nonatomic) BOOL hasAssetInfo;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (copy, nonatomic) NSArray *namedEntities;
@property (readonly, nonatomic) unsigned long long namedEntitiesCount;
@property (retain, nonatomic) _INPBPrivateMediaItemValueData *privateMediaItemValueData;
@property (readonly, nonatomic) BOOL hasPrivateMediaItemValueData;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSArray *topics;
@property (readonly, nonatomic) unsigned long long topicsCount;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)namedEntitiesType;
+ (Class)topicsType;

- (void)addTopics:(id)a0;
- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)addNamedEntities:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)namedEntitiesAtIndex:(unsigned long long)a0;
- (id)typeAsString:(int)a0;
- (void)clearTopics;
- (id)topicsAtIndex:(unsigned long long)a0;
- (void)clearNamedEntities;
- (void)encodeWithCoder:(id)a0;

@end
