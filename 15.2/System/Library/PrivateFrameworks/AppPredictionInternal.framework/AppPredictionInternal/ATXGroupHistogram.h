@class NSMutableDictionary;

@interface ATXGroupHistogram : NSObject {
    NSMutableDictionary *_histogram;
    BOOL _isTotalScoreValid;
    double _total;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (double)getScoreForGroup:(id)a0;
- (double)_getTotalScore;
- (void)addScore:(double)a0 group:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
