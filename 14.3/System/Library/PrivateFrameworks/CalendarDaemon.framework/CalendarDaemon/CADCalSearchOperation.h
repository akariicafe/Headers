@class NSString, ClientConnection, CalSearch, NSObject;
@protocol NSObject, OS_dispatch_semaphore;

@interface CADCalSearchOperation : NSOperation <CalSearchDataSink> {
    ClientConnection *_connection;
    CalSearch *_search;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
    unsigned int _replyID;
    long long _lastIndex;
    id<NSObject> _boostToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationWithConnection:(id)a0 filter:(struct CalFilter { } *)a1 replyID:(unsigned int)a2;

- (void)cancel;
- (id)search;
- (BOOL)calSearchShouldStopSearching:(id)a0;
- (void)calSearchComplete:(id)a0;
- (void)calSearch:(id)a0 foundOccurrences:(struct __CFArray { } *)a1 cachedDays:(struct __CFArray { } *)a2 cachedDaysIndexes:(struct __CFArray { } *)a3;
- (void)calSearch:(id)a0 showResultsStartingOnDate:(double)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)main;
- (void)_completeOperation;
- (unsigned int)replyID;
- (id)initWithConnection:(id)a0 filter:(struct CalFilter { } *)a1 replyID:(unsigned int)a2;

@end
