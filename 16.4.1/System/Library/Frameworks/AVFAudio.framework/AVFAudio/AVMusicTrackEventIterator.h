@interface AVMusicTrackEventIterator : NSObject {
    struct MusicTrackEventIteratorImpl { struct OpaqueMusicEventIterator *x0; } *_impl;
}

- (BOOL)setEventTime:(double)a0;
- (int)previousEvent;
- (id)initWithImpl:(struct MusicTrackEventIteratorImpl { struct OpaqueMusicEventIterator *x0; } *)a0;
- (int)nextEvent;
- (BOOL)hasCurrentEvent;
- (void)deleteEvent;
- (void)getEventInfo:(double *)a0 outEventType:(unsigned int *)a1 eventData:(void **)a2 dataSize:(unsigned int *)a3;
- (BOOL)hasNextEvent;
- (BOOL)hasPreviousEvent;
- (void)seek:(double)a0;
- (BOOL)setEventInfo:(unsigned int)a0 data:(const void *)a1;

@end
