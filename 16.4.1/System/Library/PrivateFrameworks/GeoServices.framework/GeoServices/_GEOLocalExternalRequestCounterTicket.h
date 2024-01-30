@class NSDate, NSString, GEORequestCounterPersistence;

@interface _GEOLocalExternalRequestCounterTicket : GEOExternalRequestCounterTicketBase {
    GEORequestCounterPersistence *_persistence;
    NSDate *_startDate;
    NSString *_requestType;
    NSString *_requestSubtype;
    NSString *_source;
}

+ (id)externalRequestCounterForType:(id)a0 subtype:(id)a1 source:(id)a2 appId:(id)a3 persistence:(id)a4;

- (void).cxx_destruct;
- (void)_incrementExternalForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 xmitBytes:(long long)a3 recvBytes:(long long)a4 usedInterfaces:(unsigned long long)a5 requestType:(id)a6 requestSubtype:(id)a7 source:(id)a8;

@end
