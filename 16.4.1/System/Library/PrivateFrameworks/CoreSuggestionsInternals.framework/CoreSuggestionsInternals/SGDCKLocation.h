@class NSString, NSData;

@interface SGDCKLocation : PBCodable <NSCopying> {
    struct { unsigned char accuracy : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char quality : 1; unsigned char locationType : 1; } _has;
}

@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) NSString *address;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasAccuracy;
@property (nonatomic) double accuracy;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) double quality;
@property (readonly, nonatomic) BOOL hasHandle;
@property (retain, nonatomic) NSData *handle;
@property (readonly, nonatomic) BOOL hasAirportCode;
@property (retain, nonatomic) NSString *airportCode;

- (id)locationTypeAsString:(int)a0;
- (int)StringAsLocationType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
