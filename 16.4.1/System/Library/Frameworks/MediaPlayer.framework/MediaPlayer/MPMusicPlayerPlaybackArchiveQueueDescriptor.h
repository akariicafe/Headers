@class MPPlaybackArchive;

@interface MPMusicPlayerPlaybackArchiveQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (readonly, copy, nonatomic) MPPlaybackArchive *playbackArchive;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPlaybackArchive:(id)a0;

@end
