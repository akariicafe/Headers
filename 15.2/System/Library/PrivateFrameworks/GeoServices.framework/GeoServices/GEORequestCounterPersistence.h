@class GEOSQLiteDB;

@interface GEORequestCounterPersistence : NSObject {
    GEOSQLiteDB *_db;
    double _maxAge;
}

@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;

- (void)_tearDown;
- (void)fetchAnalyticsHandlingDataFrom:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)incrementExternalForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 xmitBytes:(long long)a3 recvBytes:(long long)a4 usedInterfaces:(unsigned long long)a5 requestType:(id)a6 requestSubtype:(id)a7 source:(id)a8;
- (void)recordAnalyticsUploadSuccessCount:(long long)a0 bytes:(long long)a1 logMsgType:(long long)a2 usedCellular:(BOOL)a3 at:(id)a4;
- (void)finishedProactiveTileDownloadForIdentifier:(id)a0 policy:(unsigned char)a1 tilesConsidered:(unsigned int)a2 tileDownloadAttempts:(unsigned int)a3 successes:(unsigned int)a4 failures:(unsigned int)a5 bytesDownloaded:(unsigned long long)a6;
- (void)countsDuring:(id)a0 withCompletion:(id /* block */)a1;
- (void)startedProactiveTileDownloadForIdentifier:(id)a0 policy:(unsigned char)a1;
- (void)_recordAnalylticsCount:(long long)a0 logMsgType:(long long)a1 at:(id)a2 withFxn:(void /* function */ *)a3;
- (void)fetchRoutePreloadSessionsFrom:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)incrementForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 requestType:(int)a3 result:(unsigned char)a4 xmitBytes:(long long)a5 recvBytes:(long long)a6 usedInterfaces:(unsigned long long)a7 withCompletion:(id /* block */)a8;
- (void)recordAnalyticsUploadFailureCount:(long long)a0 logMsgType:(long long)a1 at:(id)a2;
- (id)initWithDBFilePath:(id)a0 maxCountAge:(double)a1;
- (void)recordAnalyticsPersistCount:(long long)a0 logMsgType:(long long)a1 at:(id)a2;
- (void)logsDuring:(id)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (void)recordRoutePreloadSessionAt:(id)a0 transportType:(long long)a1 tilesPreloaded:(unsigned long long)a2 tilesUsed:(unsigned long long)a3 tilesMissed:(unsigned long long)a4;
- (void)purgeAllCounts;
- (void)recordAnalyticsDBExpireCount:(long long)a0 logMsgType:(long long)a1 at:(id)a2;
- (void)_purgeOlderThan:(id)a0;
- (void)externalRequestsCount:(id /* block */)a0;
- (void)readProactiveTileDownloadsSince:(id)a0 handler:(id /* block */)a1;

@end
