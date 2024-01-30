@class NSString, NSData;

@interface _NMRNowPlayingApplicationStateProtobuf : PBCodable <NSCopying> {
    struct { unsigned char playbackState : 1; unsigned char processID : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCompanionBundleIdentifier;
@property (retain, nonatomic) NSString *companionBundleIdentifier;
@property (readonly, nonatomic) BOOL hasLocalizedDisplayName;
@property (retain, nonatomic) NSString *localizedDisplayName;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) unsigned int playbackState;
@property (readonly, nonatomic) BOOL hasWatchBundleIdentifier;
@property (retain, nonatomic) NSString *watchBundleIdentifier;
@property (readonly, nonatomic) BOOL hasIconDigest;
@property (retain, nonatomic) NSData *iconDigest;
@property (nonatomic) BOOL hasProcessID;
@property (nonatomic) int processID;

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
