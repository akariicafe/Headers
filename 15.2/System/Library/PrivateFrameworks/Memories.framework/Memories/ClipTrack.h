@class NSMutableArray;

@interface ClipTrack : NSObject {
    int _clipType;
    int _trackID;
    NSMutableArray *_clips;
}

+ (id)nameForClipType:(int)a0 trackID:(int)a1;

- (id)clips;
- (void).cxx_destruct;
- (void)addClip:(id)a0;
- (void)removeClip:(id)a0;
- (int)clipType;
- (id)initWithClipType:(int)a0 trackID:(int)a1;
- (id)trackName;
- (void)insertClip:(id)a0 atIndex:(long long)a1;
- (long long)indexOfClip:(id)a0;

@end
