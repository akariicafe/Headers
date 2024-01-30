@class NSString, NSData;

@interface SGDCKInteractionInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasInteractionId;
@property (retain, nonatomic) NSString *interactionId;
@property (readonly, nonatomic) BOOL hasInteractionGroupId;
@property (retain, nonatomic) NSString *interactionGroupId;
@property (readonly, nonatomic) BOOL hasInteractionBundleId;
@property (retain, nonatomic) NSString *interactionBundleId;
@property (readonly, nonatomic) BOOL hasReservationItemReferences;
@property (retain, nonatomic) NSData *reservationItemReferences;
@property (readonly, nonatomic) BOOL hasReservationContainerReference;
@property (retain, nonatomic) NSData *reservationContainerReference;
@property (readonly, nonatomic) BOOL hasIntentResponseUserActivityString;
@property (retain, nonatomic) NSString *intentResponseUserActivityString;
@property (readonly, nonatomic) BOOL hasInteractionTeamId;
@property (retain, nonatomic) NSString *interactionTeamId;

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
