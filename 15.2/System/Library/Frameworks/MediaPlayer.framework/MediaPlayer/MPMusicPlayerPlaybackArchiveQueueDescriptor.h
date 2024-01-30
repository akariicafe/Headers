@class MPPlaybackArchive;

@interface MPMusicPlayerPlaybackArchiveQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (readonly, copy, nonatomic) MPPlaybackArchive *playbackArchive;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlaybackArchive:(id)a0;

@end
