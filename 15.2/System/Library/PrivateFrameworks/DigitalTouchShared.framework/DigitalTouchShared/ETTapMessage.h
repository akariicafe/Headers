@class SKFieldNode, NSTimer, NSMutableArray, SKScene;

@interface ETTapMessage : ETMessage {
    SKScene *_preVisualizeScene;
    SKFieldNode *_noiseField;
    struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } _points;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _times;
    NSMutableArray *_colors;
    double _baseTime;
    NSTimer *_soundTimer;
    unsigned long long _soundIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _noiseFieldLock;
}

@property (readonly, nonatomic) unsigned long long tapCount;

+ (unsigned short)messageType;

- (id)archiveData;
- (void).cxx_destruct;
- (id)init;
- (struct CGPoint { double x0; double x1; })pointAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (id)initWithArchiveData:(id)a0;
- (id)messageTypeAsString;
- (double)messageDuration;
- (void)displayInScene:(id)a0;
- (BOOL)reachedSizeLimit;
- (void)preVisualizeInScene:(id)a0;
- (void)addTapAtPoint:(struct CGPoint { double x0; double x1; })a0 time:(double)a1 color:(id)a2;
- (void)_displayInScene:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 color:(id)a2 filled:(BOOL)a3 withWisp:(BOOL)a4;
- (double)timeDeltaAtIndex:(unsigned long long)a0;
- (id)_animateCircleInner0:(double)a0 inner1:(double)a1 outer0:(double)a2 outer1:(double)a3 duration:(double)a4;

@end
