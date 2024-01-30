@class GEOStyleAttributes, NSString, PBUnknownFields;

@interface MSPTransitStorageIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char cartoID : 1; unsigned char defaultTransitType : 1; unsigned char iconAttributeKey : 1; unsigned char iconAttributeValue : 1; unsigned char iconType : 1; } _has;
}

@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) unsigned int cartoID;
@property (readonly, nonatomic) unsigned int defaultTransitType;
@property (readonly, nonatomic) unsigned int iconAttributeKey;
@property (readonly, nonatomic) unsigned int iconAttributeValue;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasIconType;
@property (nonatomic) int iconType;
@property (nonatomic) BOOL hasCartoID;
@property (nonatomic) unsigned int cartoID;
@property (nonatomic) BOOL hasDefaultTransitType;
@property (nonatomic) unsigned int defaultTransitType;
@property (nonatomic) BOOL hasIconAttributeKey;
@property (nonatomic) unsigned int iconAttributeKey;
@property (nonatomic) BOOL hasIconAttributeValue;
@property (nonatomic) unsigned int iconAttributeValue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)initWithIcon:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;
- (id)iconTypeAsString:(int)a0;
- (int)StringAsIconType:(id)a0;

@end
