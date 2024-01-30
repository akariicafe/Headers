@class GEORequestCounterRemoteProxy;

@interface _GEORemoteExternalRequestCounterTicket : GEOExternalRequestCounterTicketBase {
    GEORequestCounterRemoteProxy *_remoteProxy;
}

+ (id)externalRequestCounterForType:(id)a0 subtype:(id)a1 source:(id)a2 appId:(id)a3 remoteProxy:(id)a4;

- (void).cxx_destruct;
- (void)_incrementExternalForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 xmitBytes:(long long)a3 recvBytes:(long long)a4 usedInterfaces:(unsigned long long)a5 requestType:(id)a6 requestSubtype:(id)a7 source:(id)a8;

@end
