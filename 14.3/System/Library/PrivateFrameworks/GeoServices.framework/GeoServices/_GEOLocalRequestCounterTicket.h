@class NSString, GEORequestCounterPersistence, NSObject;
@protocol OS_nw_activity;

@interface _GEOLocalRequestCounterTicket : NSObject <GEORequestCounterTicket> {
    long long _subTaskXmitBytes;
    long long _subTaskRecvBytes;
    NSString *_appId;
    NSString *_requestId;
    GEORequestCounterPersistence *_persistence;
    NSObject<OS_nw_activity> *_nwActivity;
    _GEOLocalRequestCounterTicket *_parentTask;
    BOOL _logNetworkActivityOnly;
    BOOL _complete;
    struct { int type; union { int raw; int tile; int placeRequest; } subtype; } _type;
    unsigned char _subtasks;
    unsigned long long _signpostId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 appId:(id)a1 persistence:(id)a2;
+ (id)requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 appId:(id)a1;
+ (id)_requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 appId:(id)a1 withParent:(id)a2 logNetworkActivityOnly:(BOOL)a3;

- (void).cxx_destruct;
- (void)requestCompletedWithResult:(unsigned char)a0 xmitBytes:(long long)a1 recvBytes:(long long)a2;
- (id)createSubtask:(BOOL)a0;
- (void)startingRequestWithTask:(id)a0;
- (void)_subTask:(id)a0 completedWithResult:(unsigned char)a1 xmitBytes:(long long)a2 recvBytes:(long long)a3;

@end
