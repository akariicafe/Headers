@class NSMutableDictionary, NSMutableSet, AWDServerConnection;

@interface PLAWDMetricsService : PLService

@property (retain) AWDServerConnection *awdServerConn;
@property (retain) NSMutableSet *currRunningMetrics;
@property (retain) NSMutableSet *updateRunningMetrics;
@property (retain) NSMutableDictionary *classDictionary;

+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (BOOL)initAWDInterface;
- (BOOL)connectToAWDServer;
- (void)auxClassWrapper:(id)a0 withAction:(long long)a1;
- (void)threadFunc;

@end
