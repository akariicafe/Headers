@class NSString, HDCodableEntityIdentifier;

@interface HDCodableNanoSyncAnchor : PBCodable <HDNanoSyncDescription, NSCopying> {
    struct { unsigned char anchor : 1; unsigned char objectType : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) int objectType;
@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) long long anchor;
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier;

- (id)objectTypeAsString:(int)a0;
- (int)StringAsObjectType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;
- (id)nanoSyncDescription;

@end
