@class NSMutableArray, NSMutableIndexSet;

@interface PHImportTimerCollection : NSObject {
    unsigned char _mediaType;
    unsigned long long _fileSize;
    NSMutableArray *_timers;
    NSMutableIndexSet *_runningTimers;
}

@property unsigned char aspectRatio;

- (void)processTimesOfType:(unsigned char)a0 withBlock:(id /* block */)a1;
- (id)description;
- (void)stopTiming:(id)a0;
- (id)startTiming:(unsigned char)a0 subtype:(unsigned char)a1;
- (void).cxx_destruct;
- (id)initForMediaType:(unsigned char)a0 fileSize:(unsigned long long)a1;
- (double)duration:(unsigned char)a0;

@end
