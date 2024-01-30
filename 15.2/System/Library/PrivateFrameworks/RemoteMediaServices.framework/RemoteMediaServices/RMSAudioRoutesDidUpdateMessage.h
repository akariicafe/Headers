@class NSMutableArray;

@interface RMSAudioRoutesDidUpdateMessage : PBCodable <NSCopying> {
    struct { unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (retain, nonatomic) NSMutableArray *audioRoutes;

+ (Class)audioRoutesType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearAudioRoutes;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addAudioRoutes:(id)a0;
- (unsigned long long)audioRoutesCount;
- (id)audioRoutesAtIndex:(unsigned long long)a0;

@end
