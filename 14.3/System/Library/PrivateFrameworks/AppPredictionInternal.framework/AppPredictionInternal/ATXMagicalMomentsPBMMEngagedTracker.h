@class NSString;

@interface ATXMagicalMomentsPBMMEngagedTracker : PBCodable <NSCopying> {
    struct { unsigned char anchor : 1; } _has;
}

@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) int anchor;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)anchorAsString:(int)a0;
- (int)StringAsAnchor:(id)a0;

@end
