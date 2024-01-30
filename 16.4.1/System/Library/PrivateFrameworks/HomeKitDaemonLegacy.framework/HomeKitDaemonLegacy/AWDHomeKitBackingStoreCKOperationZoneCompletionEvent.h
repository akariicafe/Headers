@class NSString;

@interface AWDHomeKitBackingStoreCKOperationZoneCompletionEvent : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; unsigned char timestamp : 1; unsigned char containerType : 1; unsigned char zoneType : 1; unsigned char didSucceed : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDidSucceed;
@property (nonatomic) BOOL didSucceed;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) int containerType;
@property (nonatomic) BOOL hasZoneType;
@property (nonatomic) int zoneType;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;

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
- (int)StringAsContainerType:(id)a0;
- (id)containerTypeAsString:(int)a0;
- (int)StringAsZoneType:(id)a0;
- (id)zoneTypeAsString:(int)a0;

@end
