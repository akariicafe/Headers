@class NSString, NSMutableArray;

@interface BMPBPhotosPhotoViewEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;

+ (Class)locationsType;

- (unsigned long long)locationsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addLocations:(id)a0;
- (unsigned long long)hash;
- (void)clearLocations;
- (id)dictionaryRepresentation;
- (id)locationsAtIndex:(unsigned long long)a0;

@end
