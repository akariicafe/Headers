@class NSString;

@interface GEORequestCounterRemoteProxy : NSObject <GEORequestCounterProtocol>

@property (nonatomic) BOOL countersEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_incrementExternalForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 xmitBytes:(long long)a3 recvBytes:(long long)a4 usedInterfaces:(unsigned long long)a5 requestType:(id)a6 requestSubtype:(id)a7 source:(id)a8;
- (void)fetchAnalyticsHandlingDataFrom:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)recordAnalyticsUploadSuccessCount:(long long)a0 bytes:(long long)a1 logMsgType:(long long)a2 usedCellular:(BOOL)a3 at:(id)a4;
- (void)finishedProactiveTileDownloadForIdentifier:(id)a0 policy:(unsigned char)a1 tilesConsidered:(unsigned int)a2 tileDownloadAttempts:(unsigned int)a3 successes:(unsigned int)a4 failures:(unsigned int)a5 bytesDownloaded:(unsigned long long)a6;
- (void)startedProactiveTileDownloadForIdentifier:(id)a0 policy:(unsigned char)a1;
- (void)fetchRoutePreloadSessionsFrom:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)readRequestLogsDuring:(id)a0 handler:(id /* block */)a1;
- (id)externalRequestCounterTicketForType:(id)a0 subtype:(id)a1 source:(id)a2 appId:(id)a3;
- (void)readRequestsPerAppDuring:(id)a0 handler:(id /* block */)a1;
- (void)recordAnalyticsUploadFailureCount:(long long)a0 logMsgType:(long long)a1 at:(id)a2;
- (void)recordTrafficProbeCollectionAt:(id)a0 tripId:(id)a1 locationCount:(int)a2 result:(unsigned char)a3;
- (void)recordAnalyticsPersistCount:(long long)a0 logMsgType:(long long)a1 at:(id)a2;
- (void)clearCounters;
- (void)_incrementForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 requestType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a3 result:(unsigned char)a4 xmitBytes:(long long)a5 recvBytes:(long long)a6 usedInterfaces:(unsigned long long)a7;
- (void)recordRoutePreloadSessionAt:(id)a0 transportType:(long long)a1 tilesPreloaded:(unsigned long long)a2 tilesUsed:(unsigned long long)a3 tilesMissed:(unsigned long long)a4;
- (void)recordAnalyticsDBExpireCount:(long long)a0 logMsgType:(long long)a1 at:(id)a2;
- (void)externalRequestsCount:(id /* block */)a0;
- (id)requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 appId:(id)a1;
- (void)readProactiveTileDownloadsSince:(id)a0 handler:(id /* block */)a1;

@end
