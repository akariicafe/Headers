@class NSMutableDictionary;

@interface ATXGroupHistogram : NSObject {
    NSMutableDictionary *_histogram;
    BOOL _isTotalScoreValid;
    double _total;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (double)getScoreForGroup:(id)a0;
- (id)init;
- (double)_getTotalScore;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addScore:(double)a0 group:(id)a1;

@end
