@class NSCountedSet, NSMutableDictionary;

@interface PXStoryDummyTimeline : PXStoryBaseTimeline <NSCopying, NSMutableCopying> {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    long long _clipCapacity;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *_clipTimeRanges;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_clipFrames;
    struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; } x11; } *_clipInfos;
    long long _segmentCapacity;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *_segmentTimeRanges;
    struct { long long x0; struct { long long x0; BOOL x1; long long x2; double x3; long long x4; } x1; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x3; } *_segmentInfos;
    NSMutableDictionary *_clipsByIdentifier;
    NSCountedSet *_resourceOccurrenceCounts;
    long long _numberOfSegments;
    struct CGSize { double width; double height; } _size;
}

@property (nonatomic) long long numberOfClips;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (long long)numberOfSegments;
- (id)clipWithIdentifier:(long long)a0;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBlock:(id /* block */)a2;
- (void)enumerateSegmentsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithTimeline:(id)a0;
- (void)setNumberOfSegments:(long long)a0;

@end
