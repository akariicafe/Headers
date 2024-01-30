@class NSString, NSXPCConnection, NSCondition, NSDate, NSMutableArray, NSMutableData;

@interface LiveFSServiceSearchResultHandler : NSObject <NSFileProviderLiveItemSearchResults> {
    unsigned int pendingData;
    BOOL waiter;
    NSDate *nextReplyDeadline;
    NSCondition *condVar;
    NSMutableArray *pendingPaths;
    NSMutableData *pendingAttributes;
    unsigned int pendingAttributesValidSize;
    unsigned int pendingAttributesSize;
    NSMutableArray *pendingXAttrs;
}

@property (retain) NSXPCConnection *conn;
@property (retain) NSString *ourToken;
@property unsigned int maxData;
@property double maxDelay;
@property BOOL throttlingActive;
@property unsigned int currentCredits;
@property BOOL active;

+ (id)newSearchHandler:(id)a0 connection:(id)a1 maxData:(unsigned int)a2 maxDelay:(double)a3 initialCredits:(unsigned int)a4;

- (void).cxx_destruct;
- (id)initForToken:(id)a0 connection:(id)a1 maxData:(unsigned int)a2 maxDelay:(double)a3 initialCredits:(unsigned int)a4;
- (int)grabACredit;
- (int)flushBufferedResults:(id)a0;
- (void)LISearchResult:(id)a0 itemAttributes:(struct _LIFileAttributes { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; struct timespec { long long x0; long long x1; } x12; struct timespec { long long x0; long long x1; } x13; struct timespec { long long x0; long long x1; } x14; struct timespec { long long x0; long long x1; } x15; struct timespec { long long x0; long long x1; } x16; struct timespec { long long x0; long long x1; } x17; } *)a1 attributeSize:(unsigned int)a2 itemXAttrs:(id)a3;
- (void)LISearchTokenDone:(int)a0;
- (void)LISearchReplenishCredits:(unsigned int)a0 reply:(id /* block */)a1;

@end
