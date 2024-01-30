@class NSString;
@protocol GEORequestCounterProtocol;

@interface GEORequestCounter : NSObject <GEORequestCounterProtocol> {
    id<GEORequestCounterProtocol> _proxy;
}

@property (nonatomic) BOOL countersEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useProxy:(Class)a0;
+ (id)sharedCounter;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;

- (void)fetchAnalyticsHandlingDataFrom:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)recordAnalyticsUploadSuccessCount:(long long)a0 bytes:(long long)a1 logMsgType:(long long)a2 usedCellular:(BOOL)a3 at:(id)a4;
- (void)readRequestLogsSince:(id)a0 handler:(id /* block */)a1;
- (void)finishedProactiveTileDownloadForIdentifier:(id)a0 policy:(unsigned char)a1 tilesConsidered:(unsigned int)a2 tileDownloadAttempts:(unsigned int)a3 successes:(unsigned int)a4 failures:(unsigned int)a5 bytesDownloaded:(unsigned long long)a6;
- (void)startedProactiveTileDownloadForIdentifier:(id)a0 policy:(unsigned char)a1;
- (void)fetchRoutePreloadSessionsFrom:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)readRequestLogsDuring:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)externalRequestCounterTicketForType:(id)a0 subtype:(id)a1 source:(id)a2 appId:(id)a3;
- (id)init;
- (void)readRequestsPerAppDuring:(id)a0 handler:(id /* block */)a1;
- (void)recordAnalyticsUploadFailureCount:(long long)a0 logMsgType:(long long)a1 at:(id)a2;
- (void)recordAnalyticsPersistCount:(long long)a0 logMsgType:(long long)a1 at:(id)a2;
- (void)readRequestsPerAppSince:(id)a0 handler:(id /* block */)a1;
- (void)clearCounters;
- (void)recordRoutePreloadSessionAt:(id)a0 transportType:(long long)a1 tilesPreloaded:(unsigned long long)a2 tilesUsed:(unsigned long long)a3 tilesMissed:(unsigned long long)a4;
- (void)recordAnalyticsDBExpireCount:(long long)a0 logMsgType:(long long)a1 at:(id)a2;
- (void)externalRequestsCount:(id /* block */)a0;
- (id)requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 appId:(id)a1;
- (void)readProactiveTileDownloadsSince:(id)a0 handler:(id /* block */)a1;

@end
