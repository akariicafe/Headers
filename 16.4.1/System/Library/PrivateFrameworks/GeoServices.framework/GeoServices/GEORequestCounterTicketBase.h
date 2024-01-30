@class NSString, NSURLSessionTask, NSObject;
@protocol OS_nw_activity;

@interface GEORequestCounterTicketBase : NSObject <GEORequestCounterTicket> {
    NSString *_appId;
    struct { int type; union { int raw; int tile; int placeRequest; } subtype; } _type;
    BOOL _logNetworkActivityOnly;
    unsigned char _result;
    double _start;
    double _end;
    long long _subTaskXmitBytes;
    long long _subTaskRecvBytes;
    unsigned long long _subTaskUsedInterfaces;
    GEORequestCounterTicketBase *_parentTask;
    unsigned char _subTaskResult;
    unsigned char _subtasks;
    NSURLSessionTask *_task;
    NSObject<OS_nw_activity> *_nwActivity;
    unsigned long long _signpostId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 appId:(id)a1;
+ (id)_requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 appId:(id)a1 withParent:(id)a2 logNetworkActivityOnly:(BOOL)a3;

- (void)_incrementForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 requestType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a3 result:(unsigned char)a4 xmitBytes:(long long)a5 recvBytes:(long long)a6 usedInterfaces:(unsigned long long)a7;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_subTask:(id)a0 completed:(unsigned char)a1 started:(double)a2 finished:(double)a3 xmitBytes:(long long)a4 recvBytes:(long long)a5 usedInterfaces:(unsigned long long)a6;
- (id)createSubtask:(BOOL)a0;
- (void)requestCompletedWithError:(id)a0;
- (void)requestCompletedWithResult:(unsigned char)a0;
- (void)startingRequestWithTask:(id)a0;

@end
