@interface KNRecordingLaserEvent : KNRecordingEvent

@property (readonly, nonatomic) struct CGPoint { double x; double y; } unitLocation;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initWithStartTime:(double)a0 unitLocation:(struct CGPoint { double x0; double x1; })a1;

@end
