@class NSMutableDictionary;

@interface CKLStreamLogStatsObserver : CKLStreamObserver

@property (retain) NSMutableDictionary *totalSizeByLine;
@property (retain) NSMutableDictionary *totalCountByLine;

- (void)finish;
- (void).cxx_destruct;
- (id)initWithLogTypes:(unsigned long long)a0;
- (void)eventMatched:(id)a0;

@end
