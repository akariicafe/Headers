@class NSMutableArray;

@interface RMSAudioRoutesDidUpdateMessage : PBCodable <NSCopying> {
    struct { unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (retain, nonatomic) NSMutableArray *audioRoutes;

+ (Class)audioRoutesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearAudioRoutes;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAudioRoutes:(id)a0;
- (unsigned long long)audioRoutesCount;
- (id)audioRoutesAtIndex:(unsigned long long)a0;

@end
