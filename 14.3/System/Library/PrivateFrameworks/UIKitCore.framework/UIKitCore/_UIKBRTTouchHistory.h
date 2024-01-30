@class NSMutableArray;

@interface _UIKBRTTouchHistory : NSObject <NSCopying> {
    NSMutableArray *_history;
    struct CGPoint { double x; double y; } _historyOffset;
    double _lastDecayTime;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } historyOffset;
@property (nonatomic) BOOL isLeftHand;
@property (readonly, nonatomic) BOOL hasHistory;
@property (readonly, nonatomic) double lastTime;

- (void)clearHistory;
- (void).cxx_destruct;
- (void)addInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIsLeftHand:(BOOL)a0;
- (BOOL)containsInfo:(id)a0;
- (void)adjustHistoryOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)reset;
- (void)_updateOffset;
- (void)_decayHistoryToSize:(unsigned long long)a0;
- (void)dealloc;
- (void)removeInfo:(id)a0;
- (void)decayHistory;
- (void)_sortHistory;

@end
