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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)_decayHistoryToSize:(unsigned long long)a0;
- (void)_sortHistory;
- (void)_updateOffset;
- (void)addInfo:(id)a0;
- (void)adjustHistoryOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsInfo:(id)a0;
- (void)decayHistory;
- (id)initWithIsLeftHand:(BOOL)a0;
- (void)removeInfo:(id)a0;

@end
