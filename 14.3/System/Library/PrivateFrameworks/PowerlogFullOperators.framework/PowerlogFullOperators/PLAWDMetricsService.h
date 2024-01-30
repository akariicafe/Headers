@class NSMutableDictionary, NSMutableSet, AWDServerConnection;

@interface PLAWDMetricsService : PLService

@property (retain) AWDServerConnection *awdServerConn;
@property (retain) NSMutableSet *currRunningMetrics;
@property (retain) NSMutableSet *updateRunningMetrics;
@property (retain) NSMutableDictionary *classDictionary;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (BOOL)initAWDInterface;
- (BOOL)connectToAWDServer;
- (void)auxClassWrapper:(id)a0 withAction:(long long)a1;
- (void)threadFunc;

@end
