@class MPPlaybackArchive;

@interface MPMusicPlayerPlaybackArchiveQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (readonly, copy, nonatomic) MPPlaybackArchive *playbackArchive;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlaybackArchive:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
