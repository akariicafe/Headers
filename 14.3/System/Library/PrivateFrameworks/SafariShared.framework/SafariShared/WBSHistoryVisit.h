@class WBSHistoryItem, NSString;

@interface WBSHistoryVisit : NSObject

@property (nonatomic) long long databaseID;
@property (nonatomic) long long redirectSourceDatabaseID;
@property (nonatomic) long long redirectDestinationDatabaseID;
@property (nonatomic) long long generation;
@property (weak, nonatomic) WBSHistoryItem *item;
@property (nonatomic) long long origin;
@property (readonly, nonatomic) double visitTime;
@property (copy) NSString *title;
@property (nonatomic) int score;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic, getter=loadWasSuccessful) BOOL loadSuccessful;
@property (readonly, nonatomic, getter=wasHTTPNonGet) BOOL httpNonGet;
@property (readonly, nonatomic, getter=isSynthesized) BOOL synthesized;
@property (retain, nonatomic) WBSHistoryVisit *redirectSource;
@property (retain, nonatomic) WBSHistoryVisit *redirectDestination;
@property (readonly, nonatomic) WBSHistoryVisit *endOfRedirectChain;
@property (readonly, nonatomic) unsigned long long redirectSourceChainLength;

+ (id)synthesizedVisitWithHistoryItem:(id)a0 visitTime:(double)a1;
+ (int)scoreForWeightedVisitCount:(float)a0;
+ (float)weightedVisitCountFromScore:(int)a0;

- (id)initWithHistoryItem:(id)a0 serviceVisit:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasAttributes:(unsigned long long)a0;
- (double)_weight;
- (id)initWithHistoryItem:(id)a0 sqliteRow:(id)a1 baseColumnIndex:(unsigned long long)a2;
- (void)recomputeScore;
- (id)initWithHistoryItem:(id)a0 streamedVisit:(const struct _HistoryStreamedVisit { struct { unsigned int x0; unsigned int x1; } x0; long long x1; long long x2; double x3; char x4; char x5; char x6; int x7; long long x8; long long x9; long long x10; long long x11; long long x12; char *x13; } *)a1;
- (id)initWithHistoryItem:(id)a0 visitTime:(double)a1 loadWasSuccesful:(BOOL)a2 wasHTTPNonGet:(BOOL)a3 origin:(long long)a4 attributes:(unsigned long long)a5;
- (id)initWithHistoryItem:(id)a0 visitTime:(double)a1;

@end
