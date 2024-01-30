@class NSData, NSMutableArray;

@interface HMPBMediaPlaybackAction : PBCodable <NSCopying> {
    struct { unsigned char mediaPlaybackState : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasActionUUID;
@property (retain, nonatomic) NSData *actionUUID;
@property (retain, nonatomic) NSMutableArray *mediaProfiles;
@property (nonatomic) BOOL hasMediaPlaybackState;
@property (nonatomic) int mediaPlaybackState;
@property (readonly, nonatomic) BOOL hasVolume;
@property (retain, nonatomic) NSData *volume;
@property (readonly, nonatomic) BOOL hasPlaybackArchive;
@property (retain, nonatomic) NSData *playbackArchive;

+ (Class)mediaProfilesType;

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
- (void)clearMediaProfiles;
- (void)addMediaProfiles:(id)a0;
- (unsigned long long)mediaProfilesCount;
- (id)mediaProfilesAtIndex:(unsigned long long)a0;

@end
