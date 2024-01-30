@class NSMutableArray;

@interface GEODataURLSessionList : NSObject {
    NSMutableArray *_urlSessions;
    NSMutableArray *_lastUsedDates;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)urlSessionForIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)pruneSessionsNotInIdentifierArray:(id)a0 agressive:(BOOL)a1;
- (void)addSession:(id)a0;
- (id)urlSessionForRequest:(id)a0;

@end
