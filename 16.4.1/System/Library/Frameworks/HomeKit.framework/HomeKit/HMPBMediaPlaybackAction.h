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
- (void)addMediaProfiles:(id)a0;
- (void)clearMediaProfiles;
- (id)mediaProfilesAtIndex:(unsigned long long)a0;
- (unsigned long long)mediaProfilesCount;

@end
