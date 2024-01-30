@interface KNRecordingEvent : NSObject <NSCopying>

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic, getter=isIgnoredWhenSeeking) BOOL ignoredWhenSeeking;
@property (readonly, nonatomic) BOOL canPrecedeDiscontinuity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStartTime:(double)a0;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (id)recordingEventByAddingTimeOffset:(double)a0;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;

@end
