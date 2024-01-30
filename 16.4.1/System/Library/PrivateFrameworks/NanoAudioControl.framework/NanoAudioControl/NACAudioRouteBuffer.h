@class NSString;

@interface NACAudioRouteBuffer : PBCodable <NSCopying> {
    struct { unsigned char routeType : 1; unsigned char picked : 1; unsigned char supportsVolumeControl : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) BOOL hasRouteName;
@property (retain, nonatomic) NSString *routeName;
@property (nonatomic) BOOL hasSupportsVolumeControl;
@property (nonatomic) BOOL supportsVolumeControl;
@property (nonatomic) BOOL hasPicked;
@property (nonatomic) BOOL picked;
@property (nonatomic) BOOL hasRouteType;
@property (nonatomic) int routeType;

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
- (int)StringAsRouteType:(id)a0;
- (id)routeTypeAsString:(int)a0;

@end
