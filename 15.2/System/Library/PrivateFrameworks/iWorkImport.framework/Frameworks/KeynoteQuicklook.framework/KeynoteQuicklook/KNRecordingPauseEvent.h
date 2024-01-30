@interface KNRecordingPauseEvent : KNRecordingEvent

@property (readonly, nonatomic) long long pauseEventType;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initWithStartTime:(double)a0 pauseEventType:(long long)a1;

@end
