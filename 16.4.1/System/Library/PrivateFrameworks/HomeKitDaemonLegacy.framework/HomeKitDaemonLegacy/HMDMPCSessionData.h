@class MPPlaybackArchive, NSSet, NSString, NSNumber;

@interface HMDMPCSessionData : HMFObject

@property (readonly, copy, nonatomic) NSSet *mediaProfiles;
@property (readonly, copy, nonatomic) NSNumber *playbackStateNumber;
@property (readonly, copy, nonatomic) NSNumber *playbackVolumeNumber;
@property (readonly, nonatomic) MPPlaybackArchive *playbackArchive;
@property (readonly, nonatomic) BOOL playbackArchiveTargetsSystemMediaApplication;
@property (readonly, copy, nonatomic) NSNumber *source;
@property (readonly, copy, nonatomic) NSString *clientName;

- (void).cxx_destruct;
- (id)dictionaryRepresentation:(BOOL)a0;
- (id)initWithDictionaryRepresentation:(id)a0 profileSource:(id)a1;
- (id)initWithMediaAction:(id)a0 source:(id)a1 clientName:(id)a2;
- (id)initWithMediaProfiles:(id)a0 playbackState:(id)a1 playbackVolume:(id)a2 playbackArchive:(id)a3 source:(id)a4 clientName:(id)a5;

@end
