@class GEORequestCounterRemoteProxy;

@interface _GEORemoteRequestCounterTicket : GEORequestCounterTicketBase {
    GEORequestCounterRemoteProxy *_remoteProxy;
}

+ (id)requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 appId:(id)a1 remoteProxy:(id)a2;

- (void)_incrementForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 requestType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a3 result:(unsigned char)a4 xmitBytes:(long long)a5 recvBytes:(long long)a6 usedInterfaces:(unsigned long long)a7;
- (void).cxx_destruct;

@end
